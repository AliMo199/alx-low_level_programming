#include "lists.h"

/**
 * free_listint_safe - free linked list
 * @h: pointer to first node in linked list
 *
 * Return: number of elements in free list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len1 = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len1++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len1++;
			break;
		}
	}

	*h = NULL;

	return (len1);
}
