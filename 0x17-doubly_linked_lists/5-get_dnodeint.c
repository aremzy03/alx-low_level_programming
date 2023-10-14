#include "lists.h"
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
