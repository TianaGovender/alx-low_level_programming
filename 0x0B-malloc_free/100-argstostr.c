#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - joins command prompts
 * @ac: int
 * @av: char
 * Return: joined args
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j, n = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			c++;
			j++;
		}

		i++;
	}

	c = c + ac + 1;
	s = malloc(c * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[n] = av[i][j];
			n++;
		}
		s[n] = '\n';
		n++;
	}

	return (s);
}
