#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha1, alpha2;

	alpha1 = 'a';
	alpha2 = 'A';

	while (alpha1 <= 'z')
	{
		putchar(alpha1);
		alpha1++;
	}

	while (alpha2 <= 'Z')
	{
		putchar(alpha2);
		alpha2++;
	}

	putchar('\n');

	return (0);

}
