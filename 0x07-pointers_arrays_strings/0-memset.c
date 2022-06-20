#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills bytes of memory
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, j, p, num;

	j = sizeof(*s) / sizeof(s[0]);
	i = 0;

	while (i <= j)
	{
		if (s[i] == *s)
		{
			num = n + i + 1;
			p = i + 1;
			while (p <= num)
			{
				s[p] = b;
				p++;

			}

		}
		else
		{
			i++;
		}
	}

	return (s);
}
