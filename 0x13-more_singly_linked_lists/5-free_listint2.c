#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: pointer to listint_t list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1;

	if (head == NULL)
		return;

	while (*head)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
	}

	*head = NULL;
}
