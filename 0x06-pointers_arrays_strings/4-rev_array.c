#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses array;
 * @a: integer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i, j, c, num[150];

	i = n - 1;
	j = 0;

	while (j < n)
	{
		num[j] = a[i];
		j++;
		i--;
	}
	c = 0;
	while (c < n)
	{
		a[c] = num[c];
		c++;
	}
}
