#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char
 * @c: char
 * Return: pointer of first occurrence or null if not found
 */

char *_strchr(char *s, char c)
{
	int p, n, i, j;

	n = sizeof(*s) / sizeof(s[0]);
	p = 0;

	while (p < n)
	{
		if (s[p] == c)
		{
			i = 1;
			j = 0;
			while (j < n)
			{
				s[j] = s[p];
				p++;
				j++;
			}
			p = n;
		}

		if (p == (n - 1))
		{
			i = 0;
		}
		p++;
	}

	if (i == 1)
	{
		return (s);
	}
	else
		return (NULL);
}
