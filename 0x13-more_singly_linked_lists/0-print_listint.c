#include "lists.h"

/**
 * print_listint - print all elements of linked list
 * @h: linked list type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num1 = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num1++;
		h = h->next;
	}

	return (num1);
}
