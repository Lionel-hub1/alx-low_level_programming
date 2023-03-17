#include <stdio.h>
/**
 * main - This program prints numbers and display them using putchar()
 * Return: It returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
