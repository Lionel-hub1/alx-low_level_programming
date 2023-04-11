#include "main.h"

/**
 * create_array - This funtion creates a string and initialize it
 * @size: The length of the string
 * @c: The actual string
 * Return: Returns a pointer to that string
 */
char *create_array(unsigned int size, char c)
{
	char *c_ptr;
	unsigned int i;

	c_ptr = malloc(sizeof(char) * size);
	if (size == 0 || c_ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		c_ptr[i] = c;
	return (c_ptr);
}
