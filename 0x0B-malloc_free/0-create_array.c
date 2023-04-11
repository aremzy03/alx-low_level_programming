#include "main.h"
#include <stdlib.h>
/**
 *create_array - returns an array of a size
 *@size: the size of the array
 *@c: the character of the array;
 *
 *Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr_ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr_ptr = malloc(size);
	if (arr_ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr_ptr[i] = c;
	}
	
	return (arr_ptr);
}
