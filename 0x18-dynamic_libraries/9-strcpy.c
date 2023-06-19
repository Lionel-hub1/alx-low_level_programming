#include "main.h"

/**
 * *_strcpy - This function copies the string pointed to by src
 * @dest: Is the pointer to the buffer in which we copy the string
 * @src: Is the string to be copied
 * Return: Returns the dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

