#include "main.h"

/**
 * _puts_recursion - This function prints the String using recursion
 * @s: is the string to iterate and print using _putchar
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		/*It points on the first character*/
		_putchar(*s);
		/* It now points on next character */
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
