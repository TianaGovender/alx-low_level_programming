#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints string
 * @str: char
 */
void _puts(char *str)
{
	putchar(*str);
	fflush(stdout);
}
