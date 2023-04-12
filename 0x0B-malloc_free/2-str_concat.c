#include "main.h"

/**
 * str_concat - This function is for concatenating 2 strings
 * @s1: Is the first string
 * @s2: Is the second string
 * Return: The combination of both
 */
char *str_concat(char *s1, char *s2)
{
	int i1, i2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i1 = 0; s1[i1] != '\0'; i1++)
		;
	for (i2 = 0; s2[i2] != '\0'; i2++)
		;

	concat = malloc(sizeof(char) * (i1 + i2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i1 = 0; s1[i1] != '\0'; i1++)
		concat[i1] = s1[i1];
	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
		concat[i1] = s2[i2];
		i1++;
	}
	concat[i1] = '\0';
	return (concat);
}
