# Makefile for kernel module

ifneq ($(KERNELRELEASE),)

obj-m = thunderscope.o
thunderscope-y = main.o

else

KERNEL_VERSION:=$(shell uname -r)
KDIR?=/lib/modules/$(KERNEL_VERSION)/build
ARCH?=$(shell uname -m)

.PHONY: all clean load unload install
default: all

all: thunderscope.ko

thunderscope.ko: main.c
	@make -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(shell pwd) modules

thunderscope.ko: litepcie.h config.h flags.h csr.h

clean:
	@make -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(shell pwd) clean
	@rm -f *~

load: install
	@rmmod thunderscope || true
	@insmod thunderscope.ko

unload:
	@rmmod thunderscope || true

install: thunderscope.ko
	@make -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(shell pwd) modules_install

udev-install:
	@cp 70-thunderscope.rules /etc/udev/rules.d && \
	udevadm control --reload-rules && udevadm trigger


endif
