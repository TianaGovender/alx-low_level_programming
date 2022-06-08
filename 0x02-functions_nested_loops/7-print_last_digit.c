#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of num
 * @n: an integer
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	char ch[10], copy[10];
	int c = abs(n % 10);

	sprintf(ch, "%d", c);
	strcat(ch, ch);
	c = atoi(ch);

	return (c);
}
