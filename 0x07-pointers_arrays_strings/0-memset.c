#include "main.h"

/**
 * _memset - This function fills the memory with a constant byte
 * @s: The location to copy to
 * @b: The constant byte to copy
 * @n: The number of characters to ocupy
 * Return: the pointer to the transformed string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
