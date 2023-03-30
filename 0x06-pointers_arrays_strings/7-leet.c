#include "main.h"
/**
 * leet - This function encode a string into 1337
 * @string: Is the string to encode
 * Return: The encoded string
 */
char *leet(char *string)
{
	int i, j;
	char replace[] = "aAeEoOtTlL";
	char using[] = "4433007711";

	i = 0;
	while (string[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (string[i] == replace[j])
			{
				string[i] = using[j];
			}
		}
		i++;
	}

	return (string);
}
