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
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	count = 0;

	if (format == NULL)
		return (-1);

	/* loops through characters from input */
	while (format != NULL && format[i] != '\0')
	{
		/* checks for input % */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}

			if (format[i + 1] == '%')
			{
				putchar('%');
				i++;
			}
			else if (format[i + 1] == 's' || format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'd')
			{

				j = 0;

				/* loops through array */
				while (types[j].type != NULL)
				{
					/* if character after % = types in array */
					if (format[i + 1] == types[j].type[0])
					{
						/* skip next char after % */
						count += types[j].f(args);
						i++;
						break;
					}
				j++;
				}
			}
			else
			{
				putchar(format[i]);
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
