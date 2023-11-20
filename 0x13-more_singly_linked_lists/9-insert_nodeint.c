#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in linked list,
 * at given position
 * @head: pointer to first node in list
 * @idx: index where new node is added
 * @n: data to insert in new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new1;
	listint_t *temp = *head;

	new1 = malloc(sizeof(listint_t));
	if (!new1 || !head)
		return (NULL);

	new1->n = n;
	new1->next = NULL;

	if (idx == 0)
	{
		new1->next = *head;
		*head = new1;
		return (new1);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new1->next = temp->next;
			temp->next = new1;
			return (new1);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
