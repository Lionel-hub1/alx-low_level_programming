#include <stdio.h>

/**
 * main - This program print all possible combinations of three digits
 * Return: Always return 0
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first < 10; first++)
	{
		for (second = 1; second < 10; second++)
		{
			for (third = 2; third < 10; third++)
			{
				if (third > second && second > first)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(third + '0');
					if (first < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
