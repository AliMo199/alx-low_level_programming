#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: data inside elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp1;
	int num1;

	if (!head || !*head)
		return (0);

	num1 = (*head)->n;
	temp1 = (*head)->next;
	free(*head);
	*head = temp1;

	return (num1);
}
