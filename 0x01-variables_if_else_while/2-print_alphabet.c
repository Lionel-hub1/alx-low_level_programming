#include <stdio.h>
/**
 * main - This is for printing the alphabet in lowercase
 * Return: It returns 0
 */
int main(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabets[i] != '\0')
	{
		putchar(alphabets[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
