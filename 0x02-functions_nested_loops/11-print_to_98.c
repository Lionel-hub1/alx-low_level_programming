#include <stdio.h>
#include "main.h"
/**
 * print_number - Helps to print numbers as expected
 * print_to_98 - This program prints all natural numbers from n to 98
 * @n: print from this number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	print_number(98);
	_putchar('\n');
}
