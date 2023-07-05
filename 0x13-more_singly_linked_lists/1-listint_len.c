#include "lists.h"
/**
 *listint_len - returns the number of elements in singly list
 *@h: the head of the linked list
 *
 *Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int counter;
	const listint_t *ptr;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
