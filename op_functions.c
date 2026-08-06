#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - print character
 * @args: argument input
 *
 * Return: 0
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	putchar(c);
	return (0);
}

/**
 * print_string - print string
 * @args: argument input
 *
 * Return: i - 1
 */
int print_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);
	
	if (s == NULL)
	{
		printf("(null)");
		return (5);
	}

	i = 0;

	/* loop to print characters 1 by 1 */
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	return (i - 1);
}
