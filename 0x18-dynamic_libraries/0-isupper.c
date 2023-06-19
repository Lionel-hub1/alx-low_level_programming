#include "main.h"

/**
 * _isupper - This program checks for uppercase character.
 * @c: an integer
 * Return: This returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

