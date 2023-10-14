#include "lists.h"
/**
 * dlistint_len - returns the length of a linked list
 * @h: the linked list to to check
 *
 * Return: the length of the linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
/**
 * get_dnodeint_at_index - gets the nodes of linked list at an index
 * @head: the pointer to the linked list
 * @index: the index at of the linked list to be fetch
 *
 * Return: the node at the specified index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
