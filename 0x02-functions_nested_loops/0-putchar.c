#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chp[20] = "_putchar";
	int n, i;

	n = strlen(chp);
	i = 0;

	while (i < n)
	{
		putchar(chp[i]);
		i++;
	}

	return (0);
}
