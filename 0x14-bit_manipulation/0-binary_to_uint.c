#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: binary string
 * Return: the unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bb, ANS = 0;
	int i;

	if (b == NULL)
		return (0);

	bb = 0;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == ' ')
			return (0);

		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '0')
			bb  = 0;
		if (b[i] == '1')
			bb = 1;

		ANS = (2 * ANS) + bb;
		i++;
	}

	return (ANS);
}
