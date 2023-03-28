#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: Is the string
 * Return: void
 */
void puts2(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
