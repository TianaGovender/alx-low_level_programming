#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @n: int to put in the new node
 * Return: address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *temp = *head;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->n = strdup(n);
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = a;

	return (a);
}
