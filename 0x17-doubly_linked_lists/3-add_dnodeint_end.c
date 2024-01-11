#include "lists.h"

/**
 * add_dnodeint_end - add new node at end
 * of dlistint_t list
 *
 * @head: head of list
 * @n: value of element
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hea;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	hea = *head;

	if (hea != NULL)
	{
		while (hea->next != NULL)
			hea = hea->next;
		hea->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = hea;

	return (new);
}
