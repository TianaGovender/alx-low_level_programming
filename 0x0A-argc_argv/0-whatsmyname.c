#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int last;

	if (argc == 1)
	{
		_putchar(argv[0]);
	}

	last = argc;
	_putchar(argv[last]);

	return (0);
}
