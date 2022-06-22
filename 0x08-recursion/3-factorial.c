#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * factorial - prints factorial of a given number
 * @n: int
 * Return: an int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
