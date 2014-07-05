/* Check if the compiler thinks if we are targeting the wrong operating system. */
#if defined(__linux__)
#error "You are not using a cross-compiler, you will most certainly run into trouble"
#endif
 
/* This tutorial will only work for the 32-bit ix86 targets. */
#if !defined(__i386__)
#error "YetAnotherOS needs to be compiled with a ix86-elf compiler"
#endif
#include "drivers/terminal_driver.h"

void main()
{
	terminal_initialize();
	/* Since there is no support for newlines in terminal_putchar yet, \n will
	   produce some VGA specific character instead. This is normal. */
	terminal_putstring("Hello, kernel World!\n");
}
