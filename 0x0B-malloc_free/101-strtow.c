#include "main.h"

/**
 * strtow - This function is for splitting the words of a sentence
 * @str: The sting to split
 * Return: The pointer to an array of those words
 */
char **strtow(char *str)
{
	char *words;
	int count = 0, i = 0;

	for (; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
			count++;
	}

	words = malloc();
	if (words == NULL)
		return (NULL);
}
