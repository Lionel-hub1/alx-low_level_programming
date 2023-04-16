#include "main.h"

/**
 * string_nconcat - concatenates two strings of any size
 * @s1: This is the first string
 * @s2: The second string
 * @n: The size of second string to concatenate to first one
 * Return: The pointer to the full string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *whole;
	unsigned int i, j, length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	if (n < length2)
		whole = malloc(sizeof(char) * (length1 + n + 1));
	else
		whole = malloc(sizeof(char) * (length1 + length2 + 1));
	if (whole == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < length1)
	{
		whole[i] = s1[i];
		i++;
	}
	while (n < length2 && i < (length1 + n))
		whole[i++] = s2[j++];
	while (n >= length2 && i < (length1 + length2))
		whole[i++] = s2[j++];
	whole[i] = '\0';

	return (whole);
}
