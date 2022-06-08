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

	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}
}
