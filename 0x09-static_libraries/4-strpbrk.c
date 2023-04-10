#include "main.h"

/**
 * _strpbrk - This function locates the first occurrence in the string
 * @s: The string to search for
 * @accept: The string to search in
 * Return: A pointer to the byte that matched in @s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return ('\0');
}
