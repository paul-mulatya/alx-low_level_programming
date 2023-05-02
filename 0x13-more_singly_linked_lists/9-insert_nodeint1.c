#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t* temp = *head;
	listint_t* temp1 = malloc(sizeof(listint_t));
	listint_t* t;
	unsigned int i = 0;
	
	if (!temp || !temp1)
	{
		return (NULL);
	}
	while (temp && i <= idx)
	{
		if (i == (idx - 1))
		{
			temp = temp->next;
			t = temp;
		}
		else
		{
			temp = temp->next;

		}
		i++;
	}
	t->next = temp1;
	temp1->next = temp;
	temp1->n = n;
	return (t->next);
}
