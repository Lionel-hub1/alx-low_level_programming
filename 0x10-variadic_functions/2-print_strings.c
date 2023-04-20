#include "variadic_functions.h"

/**
 * print_strings - This function prints words followed by a new line
 * @separator: Is a character between those words
 * @n: Is the number of words passed
 * @...: The extended arguments
 * Return: The words with separator between every two words.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	int i;

	va_start(words, n);

	for (i = 0; i < (int)n; i++)
	{
		char *str = va_arg(words, char *);

		/* print "(nil)" if the pointer is NULL otherwise, the word */
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != ((int)n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(words);
}
