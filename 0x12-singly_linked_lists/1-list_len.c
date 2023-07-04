#include "lists.h"
/**
 *list_len - finds the number of elements in linked list
 *@h: the head of the linked list
 *
 *Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int counter;
	const list_t *ptr;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
