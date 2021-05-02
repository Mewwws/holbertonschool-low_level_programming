#include "lists.h"

/**
 * insert_dnodeint_at_index - insert n at indexth node
 * @h: dlist pointer pointer
 * @idx: indexth node number
 * @n: value to add
 * Return: pointer to new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	while (index && (*head)->next)
	{
		index--;
		*head = (*head)->next;
	}
	if (index)
		return (-1);
	(*head)->prev->next = (*head)->next;
	(*head)->next->prev = (*head)->prev;
	free(*head);
	return (1);
}
