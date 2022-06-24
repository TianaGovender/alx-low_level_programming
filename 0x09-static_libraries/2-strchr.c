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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
