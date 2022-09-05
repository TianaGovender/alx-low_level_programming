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
	unsigned int p;

	p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}

	return (s);
}
