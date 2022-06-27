#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - copies strings using mem alloc
 * @str: str to  copy
 * Return: the copied array or null if size 0
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	len = len + 1;
	s = (char *) malloc(len * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}

	s[i] = '\0';

	return (s);
}
