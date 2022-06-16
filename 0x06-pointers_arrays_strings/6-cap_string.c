#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - capitilizes words
 * @str: char
 * Return: capitilized string
 */

char *cap_string(char *str)
{
	int len1, i;

	len1 = strlen(str);

	i = 0;

	while (i < len1)
	{

		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}

		if (str[i] == ' ')
		{
			str[i + 1] = toupper(str[i + 1]);
		}

		if (str[i] == '.')
		{
			str[i + 1] = toupper(str[i + 1]);
		}

		i++;
	}

	return (str);
}
