#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node - creates a new node at the beginning of the list
 *@head: the head of the list
 *@str: the string to be added
 *
 *Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->next = NULL;
	ptr->next = *head;
	ptr->len = strlen(ptr->str);
	*head = ptr;
	return (*head);
}
