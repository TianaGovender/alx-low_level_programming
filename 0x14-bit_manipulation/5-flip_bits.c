#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: the number of bits you would need to flip to get
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r, i;

	r = n ^ m;
	i = 0;
	while (r > 0)
	{
		if ((r & 1) == 1)
			i++;
		r = r >> 1;
	}

	return (i);
}
