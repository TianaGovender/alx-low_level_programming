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
	int i, j, sum;

	sum = 0;
	j = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		j = isdigit(argv[i]);
		if (j == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
