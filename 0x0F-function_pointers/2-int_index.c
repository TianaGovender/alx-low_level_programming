#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - performs functions on each element of an array
 * @array: int
 * @size: size of array
 * @cmp: pointer to print function
 * Return: if not name or function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
					return (i);
		}
	}

	return (-1);
}
