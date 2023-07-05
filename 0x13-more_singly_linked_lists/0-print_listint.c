#include "lists.h"
/**
 *print_listint - prints all the values in the nodes
 *@h: the head of the node
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int counter;

	ptr = h;
	counter = 0;
	while (ptr != NULL)
	{
		counter++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (counter);
}
