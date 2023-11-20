#include "lists.h"

/**
 * add_nodeint - add new node at beginning of linked list
 * @head: pointer to first node in linked list
 * @n: data to insert in new node
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new1;

	new1 = malloc(sizeof(listint_t));
	if (!new1)
		return (NULL);

	new1->n = n;
	new1->next = *head;
	*head = new1;

	return (new1);
}
