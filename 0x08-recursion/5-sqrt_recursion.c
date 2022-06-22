#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int a_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - prints sqrt of a given number
 * @n: int
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (a_sqrt_recursion(n, 0));
}

/**
 * a_sqrt_recursion - find natural sqrt of num
 * @n: int
 * @j: int
 * Return: int sqrt
 */

int a_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
	}
	return (a_sqrt_recursion(n, j + 1));
}
