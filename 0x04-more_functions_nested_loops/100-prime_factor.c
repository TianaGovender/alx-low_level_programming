#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, i, p[50], n;

	num = 612852475143;
	i = 2;

	while (num > 1)
	{
		n = 0;
		while ((num % i) == 0)
		{
			p[n] = i;
			num = num / i;
			n++;
		}

		i++;
	}

	return (0);
}
