#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: list_t to be free
 */

void free_list(list_t *head)
{
	list_t *b;

	while (head)
	{
		b = head->next;
		free(head->str);
		free(head);
		head = b;
	}
}
