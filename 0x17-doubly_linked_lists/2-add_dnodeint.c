#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning of the list
 * @head: the pointer to the node
 * @n: the value of the node
 *
 * Return: the new node added
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

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
	temp->next = *head;
	temp->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
}
