#include "lists.h"

/**
 * add_dnodeint_end - dlisted add node at the end
 * @head: header node pointer
 * @n: value to insert
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
