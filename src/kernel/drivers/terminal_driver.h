#ifndef TERMINAL_DRIVER_H
#define TERMINAL_DRIVER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "../strings/strings.h"

static const size_t VGA_WIDTH = 80;
static const size_t VGA_HEIGHT = 25;

/* Hardware text mode color constants. */
enum vga_color
{
	COLOR_BLACK = 0,
	COLOR_BLUE = 1,
	COLOR_GREEN = 2,
	COLOR_CYAN = 3,
	COLOR_RED = 4,
	COLOR_MAGENTA = 5,
	COLOR_BROWN = 6,
	COLOR_LIGHT_GREY = 7,
	COLOR_DARK_GREY = 8,
	COLOR_LIGHT_BLUE = 9,
	COLOR_LIGHT_GREEN = 10,
	COLOR_LIGHT_CYAN = 11,
	COLOR_LIGHT_RED = 12,
	COLOR_LIGHT_MAGENTA = 13,
	COLOR_LIGHT_BROWN = 14,
	COLOR_WHITE = 15,
};

uint8_t make_color(enum vga_color color, enum vga_color background);
uint16_t make_vgaentry(char c, uint8_t color);
size_t strlen(const char* str);
void terminal_initialize();
void terminal_setcolor(uint8_t color);
void terminal_putcharat(char c, uint8_t color, size_t x, size_t y);
void terminal_putchar(char c);
void terminal_putstring(const char* data);

#endif
