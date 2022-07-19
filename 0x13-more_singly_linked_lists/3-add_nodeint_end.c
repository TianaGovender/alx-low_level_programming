#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - printd elements of list
 * @h: pointer to node
 * Return: num
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
