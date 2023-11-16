#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node at end of linked list
 * @head: double pointer to list_t list
 * @str: string to put in new node
 *
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new1;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new1)
		return (NULL);

	new1->str = strdup(str);
	new1->len = len;
	new1->next = NULL;

	if (*head == NULL)
	{
		*head = new1;
		return (new1);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new1;

	return (new1);
}
