#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...);

/**
 * print_all - prints all
 * @format: char
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, n;
	char *str;

	i = 0;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		n = 0;

		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				n = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				n = 1;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				n = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				n = 1;
				printf("%s", str);
		}

		if (n == 1 && format[i + 1] != '\0')
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}
