#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies two strings
 * @dest: char
 * @src: char
 * @n: integer
 * Return: a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1, i;

	len1 = strlen(dest);

	i = 0;

	while (i <= n)
	{
		dest[len1 + i] = src[i];
		i++;
	}


	dest[len1 + i] = '\0';

	return (dest);
}
