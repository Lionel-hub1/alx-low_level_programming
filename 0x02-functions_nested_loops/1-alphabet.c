#include "main.h"
/**
 * print_alphabet - The program prints alphabets in lowecase
 * Return: it returns 0
 */
void print_alphabet(void)
{
	int i = 0;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (alphabets[i] != '\0')
	{
		_putchar(alphabets[i]);
		i++;
	}
}
