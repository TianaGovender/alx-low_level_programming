#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - joins two strings
 * @dest: char
 * @src: char
 * Return: a joined string
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	i = 0;

	while (i <= len2)
	{
		dest[len1 + i] = src[i];
		i++;
	}

	dest[len1 + i] = '\0';

	return (dest);
}
