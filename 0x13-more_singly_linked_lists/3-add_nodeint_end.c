#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end-adds a node at the end of the list
 * @head: a pointer to pointer to listint_t
 * @n: the position in the list where the node will be added
 * Return: pointer to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
