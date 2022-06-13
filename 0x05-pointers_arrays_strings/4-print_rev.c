#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints string in rev;
 * @s: char
 */
void print_rev(char *s)
{
	int l, i, j;

	l = strlen(s);
	i = l - 1;
	j = 0;

	while (j < l)
	{
		putchar(s[i]);
		j++;
		i--;
	}
	putchar('\n');
}
