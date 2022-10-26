#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: singly linked test
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
