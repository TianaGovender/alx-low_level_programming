#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is an integer
 *
 * Return: 1 if n is greater than 0
 * returns 0 if n equal to 0
 * returns -1 if n less than 0
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
	}
	if (n < 0)
	{
		check = -1;
	}
	if (n == 0)
	{
		check = 0;
	}
	return (check);

}
