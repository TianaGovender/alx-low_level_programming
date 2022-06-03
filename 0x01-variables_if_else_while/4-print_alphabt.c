#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e')
		{
			alpha++;
		}
		else
			if (alpha == 'q')
			{
				alpha++;
			}
			else
			{
				putchar(alpha);
				alpha++;
			}
	}

	putchar('\n');

	return (0);
}
