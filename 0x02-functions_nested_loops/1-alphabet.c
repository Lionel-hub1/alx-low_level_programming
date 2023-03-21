#include <stdio.h>
/**
 * main - The program prints alphabets in lowecase
 * Return: it returns 0
 */
int main(void)
{
	int i = 0;
#include "main.h"
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (alphabets[i] != '\0')
	{
		putchar(alphabets[i]);
		i++;
	}

	return (0);
}
