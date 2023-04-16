#include "main.h"
/**
 * *array_range - s function is for creating integers array
 * @min: Is the minimum integer
 * @max: Is the maximum integer
 * Return: A pointer to the memory storing the array
 */
int *array_range(int min, int max)
{
	int *int_array, i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	int_array = malloc(sizeof(int) * length);
	if (int_array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		int_array[i] = min++;

	return (int_array);
}
