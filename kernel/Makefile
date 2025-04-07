# Makefile for kernel module
KERNEL_VERSION:=$(shell uname -r)
KERNEL_PATH?=/lib/modules/$(KERNEL_VERSION)/build
ARCH?=$(shell uname -m)

obj-m = thunderscope.o
thunderscope-objs = main.o


all: thunderscope.ko

thunderscope.ko: main.c
	make -C $(KERNEL_PATH) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(shell pwd) modules

thunderscope.ko: litepcie.h config.h flags.h csr.h soc.h

clean:
	make -C $(KERNEL_PATH) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(shell pwd) clean
	rm -f *~
