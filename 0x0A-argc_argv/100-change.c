#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * @argc: int
 * @argv: char array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, cents;
	int coins[5] = {25, 10, 5, 2, 1};

	cents = 0;
	j = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (j <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (coins[i] <= j)
			{
				cents = cents + (j / coins[i]);
				j = j - (j / coins[i] * coins[i]);

				if (j == 0)
				{
					printf("%d\n", cents);
					break;
				}
			}

		}
	}

	return (0);
}
