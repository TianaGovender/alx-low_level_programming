#include <stdio.h>
#include <stdlib.h>
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
	int last;

	if (argc == 1)
	{
		printf("%s", argv[0]);
	}

	last = argc;
	printf("%s", argv[last]);

	return (0);
}
