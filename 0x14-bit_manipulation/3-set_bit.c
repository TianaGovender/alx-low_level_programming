#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	i = 1;
	i = i << index;
	*n = ((*n) | i);

	return (1);
}
