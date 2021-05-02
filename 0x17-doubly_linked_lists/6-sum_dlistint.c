#include "lists.h"

/**
 * sum_dlistint - counts sum of doublinst
 * @head: dlist pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
