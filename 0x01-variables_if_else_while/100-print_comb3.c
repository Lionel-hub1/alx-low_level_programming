#include <stdio.h>

/**
 * main - This program is for printing all possible combination of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = 1; second_digit <= 9; second_digit++)
		{
			if (second_digit > first_digit)
			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');
				if (first_digit < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
