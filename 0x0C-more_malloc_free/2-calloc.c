#include "main.h"

/**
 * _calloc - This function allocates memory for an array using malloc
 * @nmemb: These are number of elements in that array
 * @size: The size of each element
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return NULL;

	a_array = malloc(size * nmemb);
	if (a_array == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		a_array[i] = 0;

	return (a_array);
}

