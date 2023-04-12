#include "main.h"

/**
 * argstostr - This functions concatenates all of its arguments
 * @ac: The number of strings passed
 * @av: The actual strings or chars
 * Return: The whole concatenated strings
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str, *p;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	p = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*p++ = av[i][j];
		}
		*p++ = '\n';
	}
	*--p = '\0';

	return (str);
}
