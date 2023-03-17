#include <stdio.h>
/**
 * main - This program prints lowercase alphabets in reverse
 * Return: Returns 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
