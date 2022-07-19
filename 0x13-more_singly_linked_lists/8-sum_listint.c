#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - fress list
 * @head: a pointer
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
