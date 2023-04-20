#include "variadic_functions.h"

/**
 * sum_them_all - This function makes the summations of all params
 * @n: Is the number of parameters
 * @...: Is the extended number of arguments
 * Return: The sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments_ptr;
	unsigned int i, sum = 0;

	va_start(arguments_ptr, n);

	/* iterate through variable arguments and add them to sum */
	for (i = 0; i < n; i++)
		sum += va_arg(arguments_ptr, int);

	va_end(arguments_ptr);

	return (sum);
}
