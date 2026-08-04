#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - print character
 * @args: argument input
 *
 * Return: void
 */

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	putchar(c);
}

/**
 * print_string - print string
 * @args: argument input
 *
 * Return: void
 */
void print_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);

	i = 0;

	/* loop to print characters 1 by 1 */
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
