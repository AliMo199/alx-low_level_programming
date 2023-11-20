#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev1 = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev1;
		prev1 = *head;
		*head = next;
	}

	*head = prev1;

	return (*head);
}
