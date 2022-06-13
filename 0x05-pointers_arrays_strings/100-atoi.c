#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - convert string to int
 * @s: char
 * Return: string as integer value
 */
int _atoi(char *s)
{
	int i, len, c;

	len = strlen(s);
	c = 0;

	while (c < len)
	{
		if  (s[c] >= '0' && s[c] <= '9')
		{
			i = atoi(s);
			return (i);
		}
		else
		{
			return (0);
		}

		c++;
	}
}
