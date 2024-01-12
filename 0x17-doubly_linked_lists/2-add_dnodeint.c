#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint -Add New Element At Beginiing Of List
 * @head: Pointer
 * @n: Element In List
 * Return: New Element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
