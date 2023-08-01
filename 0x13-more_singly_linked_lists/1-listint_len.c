#include <stdlib.h>
#include "lists.h"

/**
 * listint_len returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of element in h
 */
size_t listint_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
