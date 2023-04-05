#include "main.h"

/**
 * factorial - This function prints the factorial of the number passed
 * @n: The number to consider finding factorial for
 * Return: The factorial of @n
 */
int factorial(int n)
{
	/* If the number is not zero or positive */
	if (n < 0)
		return (-1);

	/* factorial 0 is 1*/
	if (n == 0)
		return (1);

	/* main return statement*/
	return (n * factorial(n - 1));
}

