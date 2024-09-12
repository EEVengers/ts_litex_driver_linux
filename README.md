# LiteX Linux Driver and Library

This repo contains the Thunderscope Linux driver and litepcie library and test application.  This driver comes from the [LitePCIe LiteX core](https://github.com/enjoy-digital/litepcie) project, with some Thunderscope-specific modifications and optimizations.

## Building

```bash
> cd kernel/
> make
```

## Install

Before connecting the Thunderscope, load the driver with the `init.sh` script.

```bash
> sudo ./init.sh
```

## Removing

You may remove the driver with `rmmod`.

```bash
> sudo rmmod litepcie
```
