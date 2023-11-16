#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in linked list
 * @h: pointer to list_t list
 *
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n1 = 0;

	while (h)
	{
		n1++;
		h = h->next;
	}
	return (n1);
}
