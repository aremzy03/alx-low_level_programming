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
 * insert_dnodeint_at_index - inserts a node at a particular index
 * @h: the address of the node
 * @idx: index to be inserted
 * @n: the value of the node
 *
 * Return: the address of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *nnode, *tmp, *tmp2;
	size_t length = dlistint_len(*h);

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx > length)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	tmp = *h;
	tmp2 = NULL;
	nnode = malloc(sizeof(dlistint_t));
	if (nnode == 0)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = NULL;
	while (pos < idx - 1)
	{
		pos++;
		tmp = tmp->next;
	}
	tmp2 = tmp->next;
	tmp->next = nnode;
	tmp2->prev = nnode;
	nnode->next = tmp2;
	nnode->prev = tmp;
	return (*h);
}
