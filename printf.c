#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - printing respective function
 * @format: input letter
 *
 * Return: 0
 */

int get_function(char s, va_list args)
{
	unsigned int j;

	print_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int_dec},
		{"d", print_int_dec},
		{NULL, NULL}
	};

	j = 0;

	while (types[j].type != NULL)
	{
		/* if character after % = types in array */
		if (s == types[j].type[0])
		{
			return (types[j].f(args));
		}
		j++;
	}

	/* if none of them, return -1 */
	return (-1);
}

/**
 * _printf - printing respective functions
 * @format: input letter
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, count;
	int print_func;

	va_start(args, format);
	i = 0, count = 0, print_func = 0;

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}

	while (format != NULL && format[i] != '\0')
	{

		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			if (format[i + 1] == '%')
			{
				putchar('%');
				i++;
				count++;
				continue;
			}
			else
			{
				print_func = get_function(format[i + 1], args);
				if (print_func != -1) /* if one of funcs */
				{
					count += print_func;
					i += 2;
					continue;
				}
				else
				{
					putchar(format[i]);
					i++;
					continue;
				}
			}
		}

		putchar(format[i]);
		count++;
		i++;
	}

	va_end(args);
	return (count);
}
