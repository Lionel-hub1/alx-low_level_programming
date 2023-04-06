#include "main.h"

/**
 * find_prime - Is a helper function for is_prime_number
 * @n: The number to check if it's prime
 * @i: The paramater for iteration
 * Return: 1 or 0
 */
int find_prime(int n, int i)
{
	/* If n is 1, n is prime */
	if (i == 1)
		return (1);
	/* If n divisible by i, n != prime */
	else if (n % i == 0)
		return (0);

	/* Otherwise, calculate prime */
	else
		return (find_prime(n, i - 1));
}

/**
 * is_prime_number - This function states where a number is prime or not
 * @n: The number to be checked
 * Return: The indicator of 1 or 0
 */
int is_prime_number(int n)
{
	/* 0 and 1 are not prime */
	if (n <= 1)
		return (0);
	/* Otherwise, call the helper function */
	else
		return (find_prime(n, n - 1));
}
