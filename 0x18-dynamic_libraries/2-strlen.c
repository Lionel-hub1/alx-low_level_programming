#include "main.h"

/**
 * _strlen - This function returns the length of string
 * @s: This is the string to be computed
 * Return: lenghth of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
