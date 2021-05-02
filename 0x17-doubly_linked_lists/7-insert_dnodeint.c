#include "lists.h"

/**
 * insert_dnodeint_at_index - insert n at indexth node
 * @h: dlist pointer pointer
 * @idx: indexth node number
 * @n: value to add
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx && (*h)->next)
	{
		idx--;
		*h = (*h)->next;
	}
	if (idx)
		return (NULL);
	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = *h;
	new->next = (*h)->next;
	(*h)->next = new;
	new->next->prev = new;
	return (new);
}
