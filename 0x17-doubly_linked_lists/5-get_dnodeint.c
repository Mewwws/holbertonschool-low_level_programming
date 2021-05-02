#include "lists.h"

/**
 * get_dnodeint_at_index - goes to indexth node
 * @head: dlist pointer
 * @index: indexth node number
 * Return: pointer to new node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index && head->next)
	{
		index--;
		head = head->next;
	}
	if (head == NULL || index)
		return (NULL);
	return (n);
}
