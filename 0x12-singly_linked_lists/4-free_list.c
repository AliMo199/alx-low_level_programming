#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: list_t list to free
 */
void free_list(list_t *head)
{
	list_t *templ;

	while (head)
	{
		templ = head->next;
		free(head->str);
		free(head);
		head = templ;
	}
}
