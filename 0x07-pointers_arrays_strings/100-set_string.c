#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * set_string - sets val of pointer to char
 * @s: char
 * @to: char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
