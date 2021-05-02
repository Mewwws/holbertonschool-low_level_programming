#include "lists.h"

/**
 * sum_dlistint - counts sum of doublinst
 * @head: dlist pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int i = head->n;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		head = head->next;
		i = i + head->n;
	}
	return (i);
}
