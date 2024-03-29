#include "lists.h"

/**
 * print_dlistint - dlisted printer
 * @h: header node pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
