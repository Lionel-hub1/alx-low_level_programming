#include "main.h"
/**
 * print_diagsums - This function prints the sum of diagonals for sq-matrix
 * @a: The exact array
 * @size: The size of each sub-array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diagonal_1 = 0, diagonal_2 = 0;
	int *ptr1 = a, *ptr2 = a + size - 1;
	int i;

	for (i = 0; i < size; i++)
	{
		diagonal_1 += *ptr1;
		diagonal_2 += *ptr2;
		ptr1 += size + 1;
		ptr2 += size - 1;
	}
	printf("%d, %d\n", diagonal_1, diagonal_2);
}
