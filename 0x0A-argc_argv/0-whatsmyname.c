#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the name of the program itself
 * @argc: The ignored argument
 * @argv: The array to hold the [0] item which is a program name
 * Return: The name of the program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
