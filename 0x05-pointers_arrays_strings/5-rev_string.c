#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - prints string in rev;
 * @s: char
 */
void rev_string(char *s)
{
	int l, i, j, c;
	char p[20];

	p[1] = '0';
	l = strlen(s);
	i = l - 1;
	j = 0;

	while (j < l)
	{
		p[j] = s[i];
		j++;
		i--;
	}
	c = 0;
	while (c < l)
	{
		s[c] = p[c];
		c++;
	}
}
