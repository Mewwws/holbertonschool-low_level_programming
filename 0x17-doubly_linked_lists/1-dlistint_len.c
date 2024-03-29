#include "lists.h"

/**
 * dlistint_len - dlisted counter
 * @h: header node pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
