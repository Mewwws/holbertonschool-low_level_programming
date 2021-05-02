#include "lists.h"

/**
 * add_dnodeint_end - dlisted add node at the end
 * @head: header node pointer
 * @n: value to insert
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nex;

	while (head)
	{
		nex = head;
		head = head->next;
		free(nex);
	}
}
