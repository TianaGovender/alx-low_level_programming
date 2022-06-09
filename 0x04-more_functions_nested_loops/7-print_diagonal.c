#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - prints line
 * @n: integer
 */

void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			c = 0;
			while (c < i)
			{
				putchar(32);
				c++;
			}
			putchar('\\');
			putchar('\n');
			i++;
		}
	}

	if (n < 0 || n == 0)
	{
		putchar('\n');
	}

}
