#include "main.h"

/**
 * argstostr - This functions concatenates all of its arguments
 * @ac: The number of strings passed
 * @av: The actual strings or chars
 * Return: The whole concatenated strings
 */
char *argstostr(int ac, char **av)
{
	char *str, *ret;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		len += strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	ret = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*str++ = av[i][j];

		*str++ = '\n';
	}

	*(--str) = '\0';
	return (ret);
}
