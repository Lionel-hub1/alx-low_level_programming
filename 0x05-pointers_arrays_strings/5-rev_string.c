#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: Is the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int length;

	for (length = (strlen(s) - 1); length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
