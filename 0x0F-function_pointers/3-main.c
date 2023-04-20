#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - The main entry
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 if succeded
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op_ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op_ptr = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op_ptr) == NULL || op_ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op_ptr == '/' && num2 == 0) ||
	    (*op_ptr == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op_ptr)(num1, num2));

	return (0);
}
