#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Returns a value at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: A value at a given index or -1 if an error occours
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);
	
	i = 0; 
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	
	return ((n & 1));
}
