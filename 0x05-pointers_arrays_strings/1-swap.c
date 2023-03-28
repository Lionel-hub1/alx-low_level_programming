#include "main.h"
/**
 * swap_int - This function swaps the value of passed integers
 * @a: Is the first integer
 * @b: Is the second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
