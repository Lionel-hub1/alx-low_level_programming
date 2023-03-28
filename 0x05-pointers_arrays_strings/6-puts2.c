#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: Is the string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
