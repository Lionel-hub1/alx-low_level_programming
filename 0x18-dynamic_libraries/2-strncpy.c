#include "main.h"
/**
 * _strncpy - This function copies a string
 * @dest: The first string
 * @src: The second string
 * @n: byte
 * Return: copied string stored in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}


