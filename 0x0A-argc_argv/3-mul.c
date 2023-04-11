#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - This function multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 */
int main(int argc, char *argv[])
{
	int number_1, number_2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[2]);
	product = number_1 * number_2;
	printf("%d\n", product);
	return (0);
}
