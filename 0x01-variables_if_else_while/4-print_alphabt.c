#include <stdio.h>
/**
 * main - Print letters in lowercase and skip q & e
 * Return: It returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}

	putchar('\n');
	return (0);
}
