#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');

	return (0);
}
