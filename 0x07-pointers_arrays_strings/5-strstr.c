#include "main.h"

/**
 *  _strstr - This function locates a substring
 *  @haystack: The larger string
 *  @needle: The substring to search for
 *  Return: A pointer to where @neddle begins
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *found;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		j = 0;
		if (*(haystack + i) == *(needle + j))
		{
			found = &haystack[i];
			for (; *(needle + j) >= '\0'; j++)
			{
				if (*(needle + j) == '\0')
					return (found);
			}
		}
		if (*needle == 0)
			return (haystack);
	}
	return ('\0');
}
