#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - creates 2d array and assigns 0 to it
 * @width: int
 * @height: int
 * Return: array with 0 assigned or null if size 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(width * height * sizeof(int));

	if (p == 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			*(p + i * height + j) = 0;

	return (p);
}
