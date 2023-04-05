#include "main.h"

/**
 * _pow_recursion - This function raises the value x with power y
 * @x: The value to be given an exponent
 * @y: The exponent of x
 * Return: The final value
 */
int _pow_recursion(int x, int y)
{
	/* If the power is negative */
	if (y < 0)
		return (-1);

	/* If the power is 0 */
	if (y == 0)
		return (1);

	/* The main return expression*/
	return (x * _pow_recursion(x, y - 1));
}
