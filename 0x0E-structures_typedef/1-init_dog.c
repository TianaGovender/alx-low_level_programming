#include <stdio.h>
#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - intializing var
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
