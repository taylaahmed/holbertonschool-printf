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

void print_numbers();

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

int print_int(va_list args)
{
	int i;
	int count;

	count = 0;

	i = va_arg(args, int);

	/* bc putchar can only print 1 digit */

	if (i >= 10)
	{
		count++;
		putchar(i / 10 + '0');

	}
	putchar(i % 10 + '0');
	count++;

	return (count);

}

int print_dec(va_list args)
{
	int count;
	int i;
	int n;

	count = 0;

	i = va_arg(args, int);

	/* negatives */
	if (i < 0)
	{
		putchar('-');
		i = -i;
		count++;
		/* making it positive for printing */
	}
	if (i == 0)
	{
		count++;
	}

	n = i;

	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	
	print_numbers(i);

	return (count);

}

void print_numbers(int i)
{
	if (i / 10)
	{
		print_numbers(i / 10);
	}

	putchar(i % 10 + '0');

}
