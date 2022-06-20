#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copies bytes of memory
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n && src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	for ( ; p < n; p++)
	{
		dest[p] = '\0';
	}

	return (dest);
}
