#include "lists.h"

/**
 * sum_dlistint - Sum Of Elements In List
 * @head: List
 * Return: Int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
