#include "main.h"

/**
 * _memcpy - This function copies the memory area
 * @dest: Where we copy to
 * @src: Where we copy from
 * @n: Number of bytes to copy
 * Return: The pointer to copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
