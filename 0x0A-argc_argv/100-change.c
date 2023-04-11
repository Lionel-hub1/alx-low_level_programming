#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_min_coins - This method helps in calculating the minimum coins
 * @amount: The amount of money to make change for
 * Return: the minimum number of coins needed
 */
int get_min_coins(int amount)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;

	if (amount < 0)
		return (0);

	for (i = 0; i < 5 && amount > 0; i++)
	{
		num_coins += amount / coins[i];
		amount %= coins[i];
	}

	return (num_coins);
}

/**
 * main - This function prints the minimum number of coins
 * @argc: The number of arguments passed
 * @argv: This is an array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = get_min_coins(num);

	printf("%d\n", result);

	return (0);
}

