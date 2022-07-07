#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_strings - strings
 * @separator: char
 * @n: constant int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char*);

		if (x == NULL)
		{
			x = "(nil)";
		}

		printf("%s", x);

		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
