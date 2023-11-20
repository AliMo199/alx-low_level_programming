#include "lists.h"

/**
 * free_listint - free linked list
 * @head: listint_t list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp1;

	while (head)
	{
		temp1 = head->next;
		free(head);
		head = temp1;
	}
}
