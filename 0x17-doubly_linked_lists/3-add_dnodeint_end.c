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
	while (last->next)
		last = last->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = last;
	if (last != NULL)
		last->next = new;
	return (new);
}
