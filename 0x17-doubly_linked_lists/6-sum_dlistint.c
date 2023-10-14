#include "lists.h"
/**
 * sum_dlistint - finds the sum of the values of the linked list
 * @head: the pointer to the linked list
 *
 * Return: the sum of the list or zero
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
