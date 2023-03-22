#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - This program prints all natural numbers from n to 98
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i == 98)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				_putchar(j + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 98)
			{
				_putchar(j + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
