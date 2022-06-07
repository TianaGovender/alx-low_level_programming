#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines of lower case alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
		i++;
	}

}
