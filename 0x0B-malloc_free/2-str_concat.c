#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - length of string
 * @ss: char
 * Return: integer that is length of array
 */

int _strlen(char *ss)
{
	int i = 0;

	while (ss[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - joins strings using mem alloc
 * @s1: str
 * @s2: str
 * Return: the joined string or null if size 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, l, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	l = len1 + len2 + 1;

	s = (char *) malloc(l * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
		s[j] = s1[j];

	for (i = 0; s2[i] != '\0'; i++)
	{
		s[j] = s2[i];
		j++;
	}

	return (s);
}
