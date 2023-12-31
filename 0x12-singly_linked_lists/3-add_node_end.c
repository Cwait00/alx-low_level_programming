#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - At the end of a linked list adds a new node
 * @str: String to put in the new node
 * @head: Double pointer to the list_t list
 * Return: Address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *a = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (a->next)
		a = a->next;

	a->next = new;

	return (new);
}
