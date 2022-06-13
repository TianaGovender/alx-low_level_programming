#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other char in array;
 * @str: char
 */
void puts2(char *str)
{
	int l, j;

	l = strlen(str);
	j = 0;

	while (j < l)
	{
		if ((j % 2) == 0)
		{
			putchar(str[j]);
		}

		j++;
	}
	putchar('\n');
}
