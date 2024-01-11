#include "lists.h"

/**
 * add_dnodeint - add new node at beginning
 * of dlistint_t list
 *
 * @head: head of list
 * @n: value of element
 * Return: the address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *hea;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	hea = *head;

	if (hea != NULL)
	{
		while (hea->prev != NULL)
			hea = hea->prev;
	}

	new->next = hea;

	if (hea != NULL)
		hea->prev = new;

	*head = new;

	return (new);
}
