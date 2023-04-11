#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - This function checks if the number is valid
 * @str: This is the string that olds a number to be checked
 * Return: 0 if is a number, or 1 if it's not
 */
int is_valid_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - This is the main entry point of the program
 * @argc: The argument counter
 * @argv: The argument vector or array of arguments
 * Return: 0 if succeded
 */
int main(int argc, char *argv[])
{
	int i,  sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_valid_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
