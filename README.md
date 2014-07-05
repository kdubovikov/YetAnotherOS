# YetAnotherOS #
YetAnotherOS is a *toy* operating system built for educational purposes.

## Building ##
1. You will need to build a GCC cross-compiler for any x86 target (i686-elf for example). A good guide on building GCC can be found [here](http://wiki.osdev.org/GCC_Cross-Compiler)
2. You may want to specify a compiler name in Makefile (CC variable)
3. Run *make all* :)

## Running ##
Using an emulator is highly recommended. I use qemu for testing purposes.
```
qemu-system-i686 -kernel kernel
```
