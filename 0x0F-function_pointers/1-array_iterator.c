#include "function_pointers.h"

/**
 * array_iterator - This function executes the arg function on every array item
 * @array: The arry holding items
 * @size: The lenth of an array
 * @action: The function that does an operation
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
