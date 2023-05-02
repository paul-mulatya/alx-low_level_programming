#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node in a list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp1;
	unsigned int i = 0;

	if (!temp)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && i < index)
	{
		if (i == (index - 1))
		{
			temp1 = temp->next;
			temp->next = temp1->next;
			free(temp1);
			return (1);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (-1);
}

