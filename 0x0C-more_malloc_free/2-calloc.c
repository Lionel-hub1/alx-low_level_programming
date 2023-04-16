#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a_array;
	unsigned int i;

	a_array = malloc(size * nmemb);
	if (a_array == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		a_array[i] = 0;

	return (a_array);
}

