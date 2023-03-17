#include <stdio.h>
/**
 * main - Print alphabets in lower and uppercase
 * Return: It returns 0
 */
int main(void)
{
	char alphabets[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (alphabets[i] != '\0')
	{
		putchar(alphabets[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
