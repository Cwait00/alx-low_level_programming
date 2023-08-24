#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: Pointer to the list_t list
 * Return: number of elents in h
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
