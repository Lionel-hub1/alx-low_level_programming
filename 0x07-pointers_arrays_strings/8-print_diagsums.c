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
        int i;

        for (i = 0; i < size; i++)
        {
                diagonal_1 += a[i*size + i];
                diagonal_2 += a[i*size + (size - 1 - i)];
        }
        printf("%d, %d\n", diagonal_1, diagonal_2);
}
