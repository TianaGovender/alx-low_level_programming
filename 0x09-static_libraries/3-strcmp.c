#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = strcmp(s1, s2);

	return (i);
}
