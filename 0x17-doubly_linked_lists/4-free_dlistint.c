#include "lists.h"

/**
 * add_dnodeint_end - free dlisted
 * @head: dlist to free
 * Return: pointer to new node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
