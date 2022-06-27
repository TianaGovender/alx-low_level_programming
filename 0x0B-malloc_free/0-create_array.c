#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_array - creats array strating with c
 * @size: size of array, int
 * @c: character to use
 * Return: ther array or null if size 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cc;

	if (size == 0)
	{
		return (NULL);
	}

	cc = (char *) malloc(size * sizeof(*cc));

	if (cc == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(cc + i) = c;
	}

	return (cc);
}
