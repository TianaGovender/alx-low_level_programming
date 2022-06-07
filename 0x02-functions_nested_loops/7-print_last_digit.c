#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_last_digit - prints absolute integer
 * @n: an integer
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int c = abs(n % 10);

	return (c);
}
