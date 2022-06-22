#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int a_prime(int n, int j);

/**
 * is_prime_number - finds out if a num is a prime number
 * @n: int
 * Return: an int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (a_prime(n, n - 1));
}

/**
 * a_prime - checks if prime
 * @n: int
 * @j: int
 * Return: an int
 */

int a_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}

	if (n % j == 0 && j > 0)
		return (0);

	return (a_prime(n, j - 1));
}
