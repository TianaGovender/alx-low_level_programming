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
	int i, j;

	num = 0;
	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < '\0')
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
