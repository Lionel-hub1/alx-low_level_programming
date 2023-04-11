#include <stdio.h>

/**
 * main - This function prints all the arguments it received
 * @argc: The number of arguments passed
 * @argv: An array of passed arguments
 * Return: All the passed argments
 */
int main(int argc, char *argv[])
{
	int item;

	while (item < argc)
	{
		printf("%s\n", argv[item]);
		item++;
	}
	return (0);
}
