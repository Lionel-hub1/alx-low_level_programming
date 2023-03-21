#include <stdio.h>
/**
 * main - This program prints _putchar and a new line
 * Return: it returns 0
 */
int main(void)
{
	int i = 0;
	char word[] = "_putchar";

	while (word[i] != '\0')
	{
		putchar(word[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
