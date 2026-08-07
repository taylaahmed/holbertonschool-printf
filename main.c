#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !%");
	_printf("Let's print a simple sentence%.\n");
	_printf("%c", 'S');
	_printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	_printf("%%\n");
	_printf("%!\n");
	_printf(NULL);
	_printf("Should print a single percent sign: %%\n");
	return (0);
}
