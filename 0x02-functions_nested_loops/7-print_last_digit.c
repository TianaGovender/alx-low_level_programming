#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_last_digit - prints every minute of the day
 * @n: an integer
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int c = abs(n % 10);

	putchar(c + '0');

	return (c);
}
