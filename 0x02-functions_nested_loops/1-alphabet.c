#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
