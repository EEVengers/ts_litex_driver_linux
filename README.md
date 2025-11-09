# Thunderscope LiteX Linux Driver and Library

This repo contains the Thunderscope Linux driver and litepcie library and test application.  This driver comes from the [LitePCIe LiteX core](https://github.com/enjoy-digital/litepcie) project, with some Thunderscope-specific modifications and optimizations.

## Manual Install

This driver may be manually built and installed using the provided makefile.  The module will build locally and then can be loaded to the kernel using `insmod`.

### Building

```bash
> cd kernel/
> make
```

### Install

Before connecting the Thunderscope, install the driver and the udev rules.

```bash
> sudo make install
> sudo make udev-install
```

### Removing

You may remove the driver with `rmmod`.

```bash
> sudo rmmod thunderscope
```

## DKMS Install

Kernel modules can be managed with `dkms`.  This will automatically rebuild sources for a kernel driver if a new kernel version is installed.

**Prerequisite:** Install `dkms` from your system's package manager.

### Install

To install the kernel module using DKMS:

```bash
> cd kernel/
> sudo dkms add .
> sudo dkms build -m thunderscope -v 1.0
> sudo dkms install -m thunderscope -v 1.0
```

### Post-Install

If using dkms, you will need to copy the udev rules file to the appropriate directory.  This should be done manually, using the `make udev-install` target, or configuring the package (`.deb`, `.rpm`, `aur`, etc.) to do so.

```bash
> sudo cp kernel/70-thunderscope.rules /etc/udev/rules.d/
> udevadm control --reload-rules && udevadm trigger
```


### Remove

To remove the module from DKMS:

```bash
> sudo dkms remove -m thunderscope -v 1.0 --all
```