#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - prints line
 * @n: integer
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i <= n)
		{
			putchar('_');
			i++;
		}
		putchar('\n');
	}

	if (n <= 0)
	{
		putchar('\n');
	}

}
