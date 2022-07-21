#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints integers as binary
 * @n: long int
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		binary_p(n);
}

/**
 * binary_p - prints bin
 * @n: long int
 */

void binary_p(unsigned long int n)
{
	if (n == 0)
		return;
	
	binary_p((n >> 1));
	
	if ((n & 1) == 1)
		putchar('1');
	
	if ((n & 1) == 0)
		putchar('0');
}
