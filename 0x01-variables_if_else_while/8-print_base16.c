#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char alpha = 'A';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	while (alpha <= 'F')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
