#include "variadic_functions.h"

/**
 * print_numbers - This function prints integers and a new line at the end
 * @separator: Is the string to print between those integers
 * @n: Is the number of integers in arguments
 * Return: Numbers with separators and new line at end
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list integers;
	unsigned int i;

	va_start(integers, n);

	for (i = 0; i < n; i++)
	{
		/* print current argument as integer */
		printf("%d", va_arg(integers, int));

		/* if not the last argument print the separator*/
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	/* clean up and deallocate resources used by integers*/
	va_end(integers);
}
