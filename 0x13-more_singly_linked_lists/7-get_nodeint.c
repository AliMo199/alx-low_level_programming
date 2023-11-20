#include "lists.h"

/**
 * get_nodeint_at_index - return node at certain index in linked list
 * @head: first node in linked list
 * @index: index of node to return
 *
 * Return: pointer to node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n1 = 0;
	listint_t *temp1 = head;

	while (temp1 && n1 < index)
	{
		temp1 = temp1->next;
		n1++;
	}

	return (temp1 ? temp1 : NULL);
}
