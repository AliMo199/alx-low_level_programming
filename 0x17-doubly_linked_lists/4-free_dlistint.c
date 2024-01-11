#include "lists.h"

/**
 * free_dlistint - free dlistint_t list
 *
 * @head: head of list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpl;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmpl = head) != NULL)
	{
		head = head->next;
		free(tmpl);
	}
}
