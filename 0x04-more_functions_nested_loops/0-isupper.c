#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: integer
 * Return: 1 if c uppercase
 * return: 0 otherwise
 */

int _isupper(int c)
{ 
	int i;
	/**
	 * char ch;
	 * ch = c;
	 * num = isupper(ch);
	 */

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
