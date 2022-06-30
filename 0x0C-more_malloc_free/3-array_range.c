#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates array
 * @min: int
 * @max: int
 * Return: the pointer
 */

int  *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
