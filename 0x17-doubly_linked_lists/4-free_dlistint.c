#include "lists.h"
/**
 * free_dlistint - frees the node of the linked lists
 * @head: the node to be freed
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
