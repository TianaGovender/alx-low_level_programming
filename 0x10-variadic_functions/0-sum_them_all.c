#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...);

/**
 * sum_them_all - find summ of all the cvar input
 * @n: constant int
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum = sum + x;
	}

	va_end(args);

	return (sum);

}
