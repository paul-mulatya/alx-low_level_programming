#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint-adds a node to the beginning of a listint_t list
 * @head: pointer to a pointer to listint_t(a struct listint_s)
 * @n: variable of type int to be added to the node created
 * Return: pointer to the first node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
