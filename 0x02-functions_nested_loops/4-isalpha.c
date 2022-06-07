#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if an input is an alphabet
 * @c: is an integer
 *
 * Return: 0 if n is equal to 0
 * returns 1 if n is less than or greater than 0
 */
int _isalpha(int c)
{
	int n, check;

	n = isalpha(c);

	if (n == 0)
	{
		check = 0;
	}
	else
	{
		check = 1;
	}
	return (check);

}
