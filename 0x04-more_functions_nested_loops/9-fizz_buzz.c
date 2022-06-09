#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - fizz buzz fizzbuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, num1, num2;

	i = 1;
	while (i <= 100)
	{
		num1 = i % 3;
		num2 = i % 5;

		if (num1 == 0 && num2 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			if (num1 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				if (num2 == 0)
				{
					printf("Buzz ");
				}
				else
				{
					printf("%d ", i);
				}
			}
		}
		i++;
	}

	putchar('\n');

	return (0);
}
