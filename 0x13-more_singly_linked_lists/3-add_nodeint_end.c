#include "lists.h"

/**
 * add_nodeint_end - add node at end of linked list
 * @head: pointer to first element in list
 * @n: data to insert in new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp1 = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp1->next)
		temp1 = temp1->next;

	temp1->next = new;

	return (new);
}
