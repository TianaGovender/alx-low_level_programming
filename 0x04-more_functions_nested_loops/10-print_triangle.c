#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: integer
 */

void print_triangle(int size)
{
	int row, col1;

	row = 0;
	while (row <= size)
	{
		col1 = 1;
		while (col1 <= size)
		{
			if (col1 <= (size - row))
			{
				putchar(32);
			}
			else
			{
				putchar('#');
			}

			col1++;
		}

		row++;
		putchar('\n');
	}
}
