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

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
