#include <stdio.h>

/**
 * main - This program prints all possible pairs of two two-digit numbers
 * Return: Always return 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int n1 = i / 10;
			int n2 = i % 10;
			int n3 = j / 10;
			int n4 = j % 10;

			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(' ');
			putchar(n3 + '0');
			putchar(n4 + '0');
			if (i < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
