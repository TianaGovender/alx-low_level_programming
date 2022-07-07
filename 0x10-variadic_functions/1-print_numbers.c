#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_numbers - print numbers
 * @separator: char
 * @n: constant int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
