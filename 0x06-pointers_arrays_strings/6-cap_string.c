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
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = toupper(str[i]);
			}
		}
		if (str[i] == ' ')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}

		i++;
	}

	return (str);
}
