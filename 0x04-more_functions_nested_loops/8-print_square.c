#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_square - prints line
 * @size: integer
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
			putchar('#');
			j++;
			}
			putchar('\n');
			i++;
		}
	}

	if (size <= 0)
	{
		putchar('\n');
	}

}
