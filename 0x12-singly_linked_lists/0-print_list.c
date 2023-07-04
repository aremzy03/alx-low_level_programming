#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *print_list - prints the content of each node in the linked list
 *@h: the head of the list
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter;
	const list_t *ptr;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (counter);
}
