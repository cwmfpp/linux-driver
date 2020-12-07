obj-m:=hello.o

KERNEL:=/usr/src/linux-headers-$(shell uname -r)/  
PWD:=$(shell pwd)  
all:  
	$(MAKE) -C $(KERNEL) M=$(PWD) modules  
.PHONEY:clean  
clean :  
	rm -f *.o *.ko .*.cmd *.mod *.mod.c modules.order Module.symvers
 
