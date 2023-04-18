#include "dog.h"

/**
 * _strlen - This function returns the length of string
 * @s: This is the string to be computed
 * Return: lenghth of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}
/**
 * _memcpy - This function copies the memory area
 * @dest: Where we copy to
 * @src: Where we copy from
 * @n: Number of bytes to copy
 * Return: The pointer to copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
/**
 * new_dog - This function is a dog's factory
 * @name: Is the name for the new dog
 * @age: Is the age of the new dog
 * @owner: Is the nam eof its owner
 * Return: A pointer to the new created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nm_len, ow_len;
	dog_t *the_dog = malloc(sizeof(dog_t));

	if (!the_dog)
		return (NULL);
	nm_len = _strlen(name);
	ow_len = _strlen(owner);

	the_dog->name = malloc(nm_len + 1);
	the_dog->owner = malloc(ow_len + 1);
	if (!the_dog->name)
	{
		free(the_dog);
		free(the_dog->name);
		return (NULL);
	}
	if (!the_dog->owner)
	{
		free(the_dog);
		free(the_dog->owner);
		return (NULL);
	}

	_memcpy(the_dog->name, name, nm_len);
	_memcpy(the_dog->owner, owner, ow_len);

	the_dog->age = age;

	return (the_dog);
}
