#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- frees a list
 * @head: pointer to pointer to a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *temp1;

	while (temp)
	{
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
	*head = NULL;
}
