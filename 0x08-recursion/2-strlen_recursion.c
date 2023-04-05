#include "main.h"

/**
 * _strlen_recursion - This function counts the length of a string
 * @s: The string to be counted
 * Return: number of char(s)
 */
int _strlen_recursion(char *s)
{
	int characters;

	characters = 0;
	if (*s)
	{
		characters++;
		characters += _strlen_recursion(s + 1);
	}

	return (characters);
}
