#include <stdio.h>
/**
 * main - This is for printing the alaphabet in lowercase
 * Return: It returns 0
 */
int main(void)
{
	char alphabets[26] = "abcdefhijklmnopqrstuvwxyz";
	int i;

	while (i < 26)
	{
		putchar(alphabets[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
