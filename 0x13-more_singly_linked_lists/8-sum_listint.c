#include "lists.h"

/**
 * sum_listint - calculate sum of all data in listint_t list
 * @head: first node in linked list
 *
 * Return: resulting summation
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}

	return (s);
}
