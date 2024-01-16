#include "lists.h"

/**
 * get_dnodeint_at_index - Get Node By Index
 * @head: List
 * @index: Index Of Element
 * Return: Element By Index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head->next; c++)
	{
		head = head->next;
	}
	if (c < index)
		return (NULL);
	return (head);
}
