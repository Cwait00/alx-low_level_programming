#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *c = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = c;
		c = *head;
		*head = n;
	}

	*head = c;

	return (*head);
}

