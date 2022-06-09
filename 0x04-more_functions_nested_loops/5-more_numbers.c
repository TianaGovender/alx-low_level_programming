#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - print 0 to 14
 */

void more_numbers(void)
{
	int i, j, c, counter;
	char ch[3];

	i = 0;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				sprintf(ch, "%d", j);
				counter = strlen(ch);
				c = 0;
				while (c < counter)
				{
					putchar(ch[c]);
					c++;
				}
			}

			if (j < 10)
			{
				putchar(j + '0');
			}

			j++;
		}

		putchar('\n');
		i++;
	}
}
