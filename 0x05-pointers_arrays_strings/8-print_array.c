#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints array
 * @a: integer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}

		i++;
	}
	putchar('\n');
}
