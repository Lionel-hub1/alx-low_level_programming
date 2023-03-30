#include "main.h"

/**
 * rot13 - This is a function that encodes a string using rot13
 * @string: The string to be encoded
 * Return: The encoded string
 */
char *rot13(char *string)
{
	char replace[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char using[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (string[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (string[i] == replace[i])
			{
				string[i] = using[j];
				break;
			}
		}
	}

	return (string);
}
