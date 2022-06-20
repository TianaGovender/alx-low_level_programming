#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - how manny times letters appear in first part of string
 * @s: char
 * @accept: char
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i, j, n;

	n = sizeof(*accept) / sizeof(accept[0]);
	num = 0;
	i = 0;

	while (s[i] != ' ')
	{
		j = 0;
		while (j < n)
		{
			if (accept[j] == s[i])
			{
				num = num + 1;
			}
			j++;
		}
		i++;
	}

	return (num);
}
