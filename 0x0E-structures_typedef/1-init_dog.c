#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable
 * type struct dog.
 *
 * @d: struct pointer
 * @name: pointer to dog name
 * @age: pointer to dog age
 * @owner: pointer to dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
