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
	_printf("%");
	_printf("String:[%s]\n", "I am a string !%");
	_printf("Let's print a simple sentence%.\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	
	return (0);
}
