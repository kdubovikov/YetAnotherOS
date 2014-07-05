CSOURCES=$(shell find -name *.c)
COBJECTS=$(patsubst %.c, %.o, $(CSOURCES))
SSOURCES=$(shell find -name *.s)
SOBJECTS=$(patsubst %.s, %.o, $(SSOURCES))
KERNELNAME=kernel.bin

CC=i686-elf-gcc
LD=ld
CFLAGS=-m32 -ffreestanding -std=c99 -masm=intel
LDFLAGS=-melf_i386 -Tlink.ld
ASFLAGS=-felf

all: $(COBJECTS) $(SOBJECTS) link update

clean:
	@echo Removing object files
	@-rm $(COBJECTS) $(SOBJECTS) $(KERNELNAME)

link:
	@echo Linking
	@$(LD) $(LDFLAGS) -o $(KERNELNAME) $(SOBJECTS) $(COBJECTS)

.s.o:
	@echo Assembling $<
	@nasm $(ASFLAGS) $<

.c.o:
	@echo Compiling $<
	@$(CC) $(CFLAGS) -o $@ -c $<
