#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - len of lists
 * @h: pointer to node
 * Return: num
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
