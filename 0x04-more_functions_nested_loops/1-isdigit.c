#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: integer
 * Return: 1 if c a digit
 * return: 0 otherwise
 */

int _isdigit(int c)
{
	int i;
	/**
	 * char ch;
	 * ch = c;
	 * num = isupper(ch);
	 */

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
