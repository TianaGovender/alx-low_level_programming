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
	char ch[10], ch2[10];
	int c = abs(n % 10);

	sprintf(ch, "%d", c);
	sprintf(ch2, "%d", c);
	strcat(ch, ch2);
	c = atoi(ch);

	return (c);
}
