#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_dnode - Creates New node
 * @n: data of Node
 * @prev: Link to prev Node
 * @next: Link To Next Node
 * Return: Pointer To New Node
 */
dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	return (new);
}
/**
 * insert_dnodeint_at_index - Inserts A New Node At A Given Position
 * @h: Head Of Doubly-Linked List
 * @idx: Index For Insertion Of New Node
 * @n: Data For New Node
 * Return: Address Of New Node Or NULL If Error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *localPrev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL);
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		localPrev = curr;
	}
	if ((count == idx) && (curr == NULL))/
	{
		localPrev->next = create_dnode(n, localPrev, NULL);
		return (localPrev->next);
	}
	if ((count < idx) && (curr == NULL))
		return (NULL);
	if (localPrev != NULL)
	{
		localPrev->next = create_dnode(n, localPrev, curr);
		curr->prev = localPrev->next;
		return (localPrev->next);
	}
	return (NULL);
}
