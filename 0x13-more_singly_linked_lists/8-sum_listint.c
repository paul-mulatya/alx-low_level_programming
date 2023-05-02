#include "lists.h"
/**
 * sum_listint- sums up all the elements in the list
 * @head: the list
 * Return: sum of the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;
	listint_t *temp = head;

	while (temp)
	{
		i = temp->n;
		sum += i;
		temp = temp->next;
	}
	return (sum);
}
