#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * swap_int - swaps integers
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int *ep = NULL;

	*ep = *b;
	*b = *a;
	*a = *ep;
}
