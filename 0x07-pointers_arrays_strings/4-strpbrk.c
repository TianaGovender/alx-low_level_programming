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
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == *s)
			{
				return (s);
			}
			j++;
		}
		s++;
	}

	return (0);
}
