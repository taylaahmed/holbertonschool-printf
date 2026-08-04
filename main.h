#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);

typedef struct print
{
	char *type;
	int (*f)(va_list);
} print_t;

int print_char(va_list args);
int print_string(va_list args);
int _printf(const char *format, ...);

#endif
