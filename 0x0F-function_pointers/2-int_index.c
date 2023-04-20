#include "function_pointers.h"

/**
 * int_index - This function helps to search for an int
 * @array: The array containing a lot of integers
 * @size: The length of an array
 * @cmp: The pointer to the comparing function
 * Return: Index of first found int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	/* Iterate over the array, call the function pointed to by cmp*/
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
