#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free A List
 * @head: List
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
