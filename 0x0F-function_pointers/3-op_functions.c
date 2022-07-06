#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds
 * @a: int
 * @b: int
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: int
 * @b: int
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: int
 * @b: int
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: int
 * @b: int
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds mod
 * @a: int
 * @b: int
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
