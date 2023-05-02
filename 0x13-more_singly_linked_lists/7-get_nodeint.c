#include "lists.h"
/**
 * get_nodeint_at_index-returns the node at the value passed by index
 * @head: pointer to the list
 * @index: the node to be returned
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;
	listint_t *temp1;

	for (i = 0; i < (index - 1); i++)
	{
		temp = temp->next;
	}
	temp1 = temp->next;
	return (temp1);
}
