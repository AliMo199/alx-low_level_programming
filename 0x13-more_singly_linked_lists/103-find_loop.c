#include "lists.h"

/**
 * find_listint_loop - find the loop in linked list
 * @head: linked list to search for
 *
 * Return: address of node where loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow1 = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow1 && fast && fast->next)
	{
		fast = fast->next->next;
		slow1 = slow1->next;
		if (fast == slow1)
		{
			slow1 = head;
			while (slow1 != fast)
			{
				slow1 = slow1->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
