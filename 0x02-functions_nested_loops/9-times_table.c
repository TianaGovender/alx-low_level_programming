#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * times_table - prints timestables
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, c;

	i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		j = 0;
		while (j < 10)
		{
			c = i * j;
			putchar(c + '0');
			putchar(',');
			j++;
		}
		i++;
		putchar('\n');
	}
}
