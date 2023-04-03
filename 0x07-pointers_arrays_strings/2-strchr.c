#include "main.h"

/**
 * _strchr - This function locates a character
 * @s: The string to search in
 * @c: The character to search
 * Return: The pointer  at which the character was found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return &s[i];
	}
	return ('\0');
}
