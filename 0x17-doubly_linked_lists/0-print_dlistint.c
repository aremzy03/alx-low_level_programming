#include "lists.h"
/**
 * print_dlistint - prints it elements of a doubly linked list
 * @h: the linked list to be printed
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
