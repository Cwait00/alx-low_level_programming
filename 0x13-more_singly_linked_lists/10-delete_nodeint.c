#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: Pointer to the first element in the list
 * @index: Index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *f = *head;
	listint_t *b = NULL;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(f);
		return (1);
	}

	while (c < index - 1)
	{
		if (!f || !(f->next))
			return (-1);
		f = f->next;
		c++;
	}


	b = f->next;
	f->next = b->next;
	free(b);

	return (1);
}

