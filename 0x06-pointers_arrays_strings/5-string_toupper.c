#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @str: char
 * Return: string in uppercase
 */

char *string_toupper(char *str)
{
	int len1, i;

	len1 = strlen(str);

	i = 0;

	while (i < len1)
	{
		str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
