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
	int p, n, i, j, num;
	char ss[200];

	n = sizeof(*s) / sizeof(s[0]);
	p = 0;

	while (p < n)
	{
		if (s[p] == c)
		{
			i = 1;
			for (j = 0; j < n && s[p] != '\0'; j++)
			{
				ss[j] = s[p];
				p++;
			}
			p = n;
		}
		if (p == n)
		{
			i = 0;
		}
		p++;
	}

	for (num = 0; num < n; num++)
	{
		s[num] = ss[num];
	}
	if (i == 1)
	{
		return (s);
	}
	else
		return (NULL);
}
