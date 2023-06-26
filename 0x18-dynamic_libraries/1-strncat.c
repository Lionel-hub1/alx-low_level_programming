#include "main.h"
/**
 * _strncat - This function concatenates two strings using n bytes frm src
 * @dest: The string to be concatenates to
 * @src: This is the second string
 * @n: bytes from @src
 * Return: A new @dest with both strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

