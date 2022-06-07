#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

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
