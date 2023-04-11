#include <stdio.h>

/**
 * main - This function prints the arguments that are passed to it
 * @argc: The count of the arguments
 * @argv: The arrays of arguments needed
 * Return: The numbers in the arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc -1);
	return (0);
}
