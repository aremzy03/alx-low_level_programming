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
