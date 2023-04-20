#include "variadic_functions.h"

/**
 * print_all - This function prints anything passed as argument(s)
 * @format: Is the list of different types of arguments passed
 * @...: The extended arguments to be printed
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";
	va_list arguments_ptr;

	va_start(arguments_ptr, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arguments_ptr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arguments_ptr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arguments_ptr, double));
					break;
				case 's':
					str = va_arg(arguments_ptr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");

	va_end(arguments_ptr);
}
