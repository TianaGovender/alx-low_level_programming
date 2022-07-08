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
	int i, n, j;
	char *str;
	const char tpe[] = "cifs";

	i = 0;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		n = 0;

		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(args, int));
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

		j = 0;

		while (tpe[j] != '\0')
		{
			if (n == 1 && format[i] == tpe[j] && format[i + 1] != '\0')
			{
				printf(", ");
				break;
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
