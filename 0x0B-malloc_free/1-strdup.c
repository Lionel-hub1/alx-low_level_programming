#include "main.h"

/**
 * _strdup - This function shows a pointer to a newly allocated space
 * @str: The string that is going to be duplicated
 * Return: The pointer to the memory of duplicated string
 */
char *_strdup(char *str)
{
	char *dup_ptr;
	int length, i;

	if (str == NULL)
		return (NULL);

	length = 0;
	/*As long as the string havent ended(on last '\0') increment length*/
	while (str[length] != '\0')
		length++;

	dup_ptr = malloc(sizeof(char) * ++length);
	if (dup_ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup_ptr[i] = str[i];

	return (dup_ptr);
}
