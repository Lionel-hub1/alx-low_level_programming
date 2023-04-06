#include "main.h"

/**
 * nested_helper - This function helps to_aqrt_recursion calculate the sq-root
 * @n: The number to find it's root
 * @guess: The current guess for
 * Return: The calculated square root
 */
int nested_helper(int number, int guess)
{
	/* Calculate the square of the guess */
	int result = guess * guess;

	/* If the square > number, no natural sq-root */
	if (result > number)
		return (-1);
	else if (result == number)
		return (guess);
	else
		return (nested_helper(number, guess + 1));
}

/**
 * _sqrt_recursion - This function returns a square root of the number
 * @n: The number to find its root
 * Return: The square root in int type
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (nested_helper(n, 0));
}
