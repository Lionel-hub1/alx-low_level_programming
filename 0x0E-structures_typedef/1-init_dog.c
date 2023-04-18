#include <stdio.h>
#include "dog.h"

/**
 * init_dog - This function initializes the dog structure
 * @d: Is the pointer to the new dog
 * @name: Is the name to be given to the dog
 * @age: Is the age of the new dog
 * @owner: Is the owner of the new dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
