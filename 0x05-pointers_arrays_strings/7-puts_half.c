#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: char
 */
void puts_half(char *str)
{
	int l, j, i;

	l = strlen(str);

	if ((l % 2) == 0)
	{
		j = l / 2;
		while (j < l)
		{
			putchar(str[j]);
			j++;
		}
		putchar('\n');

	}
	else
	{
		i = (l - 1) / 2;
		while (i < (l - 1))
		{
			i++;
			putchar(str[i]);
		}
		putchar('\n');
	}
}
