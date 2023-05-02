#include "lists.h"
#include <stdio.h>
/**
 * print_listint-prints the elements of a listint_t list
 * @h:pointer to the first node
 * Return:number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
