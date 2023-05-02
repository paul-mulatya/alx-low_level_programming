#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index- insert a node in a list
 * @head: pointer to a pointer to list
 * @idx: position to insert the node
 * @n: value in the node
 * Return : pointer to the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (!temp || !node)
	{
		return (NULL);
	}
	node->n = n;
	node->next =  NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (temp && i < idx)
	{
		if (i == (idx - 1))
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
