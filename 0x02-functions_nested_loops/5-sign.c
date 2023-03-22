#include "main.h"
/**
 * print_sign - The program prints the sign of a number
 * @num: Is the number to check
 * Return: return 1 and the sign of a number
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (num < 0)
	{
		_putchar(48);
		return (0);
	}
	return (-1);
}
