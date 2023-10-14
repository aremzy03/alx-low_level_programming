#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the linked list
 * @head: the pointer to the node to be added
 * @n: the integer to be added
 *
 * Return: the new node added
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	tp = *head;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return (*head);
}
