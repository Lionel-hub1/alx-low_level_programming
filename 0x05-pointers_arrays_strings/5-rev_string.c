#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: Is the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	char temp;

	for (i = 0; i < length/2; i++)
	{
		temp = s[i];
		s[i] = s[length-i-1];
		s[length-i-1]=temp;
	}
}
