#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - joins strings
 * @s1: string
 * @s2: string
 * @n: memory to allocate
 * Return: the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int ls1, ls2, lt, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lt = ls1 + n;

	st = malloc(lt + 1);
	if (st == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lt; i++)
	{
		if (i < ls1)
			st[i] = s1[i];
		else
			st[i] = s2[i - ls1];
	}

	st[i] = '\0';

	return (st);
}
