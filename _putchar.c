#include <unistd.h>

/**
 * _putchar - print character
 * @c: character
 *
 * Return: c
 */

int _putchar(char c)
{
	int total = 0;
	total += (write(1, &c, 1));
	return (total);
}
