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

	length1 = 0;
	length2 = 0;
	while (s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		whole = malloc(sizeof(char) * (length1 + n + 1));
	else
		whole = malloc(sizeof(char) * (length1 + length2 + 1));

	if (whole == NULL)
		return (NULL);

	i = 0;
	j = 0;
	for (; i < length1; i++)
		whole[i] = s1[i];

	while (n < length2 && i < (length1 + n))
		whole[i++] = s2[j++];
	while (n >= length2 && i < (length1 + length2))
		whole[i++] = s2[j++];
	whole[i] = '\0';

	return (whole);
}
