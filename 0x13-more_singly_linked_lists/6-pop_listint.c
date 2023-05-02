#include "lists.h"
/**
 * pop_listint- frees  the head node of a list
 * @head: pointer to pointer to a list
 * Return: the value stored in the deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!(*head))
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
