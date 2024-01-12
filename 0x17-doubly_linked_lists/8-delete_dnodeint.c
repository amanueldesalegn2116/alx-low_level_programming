#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete Node At Give Index
 * @head: List
 * @index: Given Index
 * Return: -1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start;
	unsigned int i;
	unsigned int len;
	len = len_node(&head);

	start = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		start = start->next;
		free(*head);
		*head = start;
		if (start != NULL)
			start->prev = NULL;
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		start = start->next;
		if (!start)
			return (-1);
	}
	if (len - 1 == index)
	{
		start->prev->next = NULL;
		free(start);
		return (1);
	}
	start->prev->next = start->next;
	start->next->prev = start->prev;
	free(start);
	return (1);
}

/**
 * len_node - List Len
 *
 * @node: List
 * Return: Unsigned Int
 */
unsigned int len_node(dlistint_t **node)
{
	unsigned int len = 0;
	dlistint_t *start;

	start = *node;
	while (start != NULL)
	{
		len += 1;
		start = start->next;
	}
	return (len);
}
