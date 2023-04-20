#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints the opscodes of its own
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 when succedded
 */
int main(int argc, char *argv[])
{
	int storage, i;
	char *codes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	storage = atoi(argv[1]);

	if (storage < 0)
	{
		printf("Error\n");
		exit(2);
	}

	codes = (char *)main;

	for (i = 0; i < storage; i++)
	{
		if (i == storage - 1)
		{
			printf("%02hhx\n", codes[i]);
			break;
		}
		printf("%02hhx ", codes[i]);
	}
	return (0);
}
