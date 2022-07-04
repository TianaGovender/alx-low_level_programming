#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct
 * @d: struct
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
