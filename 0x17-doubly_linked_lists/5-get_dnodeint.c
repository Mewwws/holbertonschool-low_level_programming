#include "lists.h"

/**
 * get_dnodeint_at_index - goes to indexth node
 * @head: dlist pointer
 * @index: indexth node number
 * Return: pointer to new node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n;

	while (index)
	{
		if (head == NULL)
			return (NULL);
		index--;
		head = head->next;
		n = head;
	}
	return (n);
}
