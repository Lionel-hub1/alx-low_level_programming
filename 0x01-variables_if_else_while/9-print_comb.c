#include <stdio.h>
/**
 * main - This program prints all possible single number combinations
 * Return: Always return 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
