#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1;
	i = i << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	
	if (((*n >> index) & 1) == 1)
		*n = i ^ *n;

	return (1);
}
