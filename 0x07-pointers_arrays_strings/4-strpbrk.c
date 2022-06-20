#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches for a stirng of any set of bytes
 * @s: char
 * @accept: char
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s);
			}
			j++;
		}
		i++;
	}

	return (0);
}
