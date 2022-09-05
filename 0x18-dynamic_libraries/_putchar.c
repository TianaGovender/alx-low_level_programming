#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints characters
 * @c: char
 * Return: 1 (success)
 * Or else -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
