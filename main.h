#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);

/**
 * struct print - struct
 * @type: the char (c) or (s)
 * @f: function to go to
 */

typedef struct print
{
	char *type;
	int (*f)(va_list);
} print_t;

int print_char(va_list args);
int print_string(va_list args);
int _printf(const char *format, ...);
int print_int(va_list args);
int print_dec(va_list args);
void print_numbers(int i);

#endif
