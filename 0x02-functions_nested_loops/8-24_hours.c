#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours, min;

	hours = 0;

	while (hours < 24)
	{
		min = 0;
		while (min < 60)
		{
			if (hours < 10)
			{
				putchar(0 + '0');
				putchar(hours + '0');
				putchar(':');
			}
			else
			{
				putchar(hours + '0');
				putchar(':');
			}
			if (min < 10)
			{
				putchar(0 + '0');
				putchar(min + '0');
				putchar('\n');
			}
			else
			{
				putchar(min + '0');
				putchar('\n');
			}
			min++;
		}
		hours++;
	}
}
