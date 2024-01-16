#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints All Elements Of A Dlistint_t List.
 * @h: Head Of A Doubly Linked List
 * Return: The Number Of Nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n = 0;

	while (ptr && ptr->prev)
		ptr = ptr->prev;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
