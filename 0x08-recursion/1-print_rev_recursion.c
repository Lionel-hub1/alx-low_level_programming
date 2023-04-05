#include "main.h"

/**
 * _print_rev_recursion - This function that will print string in reverse
 * @s: The string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/* The last char first*/
		_print_rev_recursion(s + 1);
		/*And the first lastly*/
		_putchar(*s);
	}
}
