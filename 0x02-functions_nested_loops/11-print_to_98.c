#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: is an integer
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i = n;

	while (i < 99)
	{
		if (i == 98)
		{
			printf("%d", i);
		}
		if ((i > 0) && (i != 98))
		{
			printf("%d, ", i);
		}
		i++;
	}

	if (i > 99)
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			if ((i > 0) && (i != 98))
			{
				printf("%d, ", i);
			}
			i--;
		}
	}
	printf("\n");
}
