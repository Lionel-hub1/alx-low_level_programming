#include "main.h"
/**
 * reverse_array - This function reverses array of integers
 * @a: The pointer to an array
 * @n: Array length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}
