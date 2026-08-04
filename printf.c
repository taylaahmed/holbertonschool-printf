#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - printing respective function
 * @format: input letter
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;
	unsigned int count;

	print_t types[] = {
		{"c", print_char},
		{"s", print_string}
	};

	va_start(args, format);
	i = 0;
	count = 0;
	/* loops through characters from input */
	while (format != NULL && format[i] != '\0')
	{
		/* checks for input % */
		if (format[i] == '%')
		{
			j = 0;
			/* loops through array */
			while (types[j].type != NULL)
			{
				/* if character after % = types in array */
				if (format[i + 1] == types[j].type[0])
				{
					types[j].f(args);
					/* skip next char after % */
					i++;
					count += types[j].f(args);
					break;
				}
			j++;
			}
		}
		else
		{
			putchar(format[i]);
		}
		i++;
		count++;
	}
	va_end(args);
	return (count);
}
