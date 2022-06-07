#include <stdio.h>
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
	int n;

	n = islower(c);

	if (n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
