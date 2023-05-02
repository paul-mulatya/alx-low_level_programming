#include "lists.h"
/**
 * listint_len- a function to count the number of elements in a list
 * @h: pointer to the first node in the list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
