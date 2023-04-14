#include "main.h"
/**
 * malloc_checked - This function is used to allocate memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);

	return (space);
}
