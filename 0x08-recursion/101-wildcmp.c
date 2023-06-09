#include "main.h"

/**
 * wildcmp - This function compares two string and return 1 if identical
 * @s1: The first string
 * @s2: The second string which can even contain special character *
 * Return: A number to specify comparison
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
		{
			return (1);
		}
		else if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (0);
		}
	}
	else if (*s2 == '\0')
	{
		return (0);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
