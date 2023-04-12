#include "main.h"

/**
 * argstostr - This functions concatenates all of its arguments
 * @ac: The number of strings passed
 * @av: The actual strings or chars
 * Return: The whole concatenated strings
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		if (str[pos] == '\0')
		{
			str[pos++] = '\n';
		}
	}
	str[pos] = '\0';
	return (str);
}
