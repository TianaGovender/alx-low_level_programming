#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints string
 * @str: char
 */
void _puts(char *str)
{
	int l, i;

	l = strlen(str);
	i = 0;

	while (i < l)
	{
		putchar(str[i]);
		putchar('\n');
		fflush(stdout);
		i++;
	}
}
