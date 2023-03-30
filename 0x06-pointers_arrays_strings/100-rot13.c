#include "main.h"

/**
 * rot13 - This function encodes a string using rot13
 * @string: The string to be encoded
 * Return: Encoded string
 */

char *rot13(char *string)
{
	int i, j;
	char replace[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char use[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (string[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (string[i] == replace[j])
			{
				string[i] = use[j];
				break;
			}
		}
		i++;
	}
	return (string);
}
