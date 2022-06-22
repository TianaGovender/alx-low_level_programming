#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int actual_sqrt_recursion(int n, int i);

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

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find natural sqrt of num
 * @n: int
 * @i: int
 * Return: int sqrt
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
	}
	return (actual_sqrt_recursion(n, i + 1));
}
