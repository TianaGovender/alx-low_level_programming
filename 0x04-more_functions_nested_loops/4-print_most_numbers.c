#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_most_numbers - print 0 to 9 with 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}

		i++;
	}
	putchar('\n');

}
