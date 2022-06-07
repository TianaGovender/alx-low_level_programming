#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: is an integer
 *
 * Return: 1 if n is greater than 0
 * returns 0 if n is less than 0
 */
int _islower(int c)
{
	int n, check;

	n = islower(c);

	if (n > 0)
	{
		check = 1;
	}
	else
	{
		check = 0;
	}
	return (check);

}
