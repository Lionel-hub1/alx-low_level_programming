#include "main.h"

/**
 * print_rev - This function prints the a string from backward
 * @s: Is the string to be printed that way
 * Return: void
 */
void print_rev(char *s)
{
	int length;

	for (length = strlen(s); length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
