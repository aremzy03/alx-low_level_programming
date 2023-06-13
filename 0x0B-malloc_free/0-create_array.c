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
	char *ptr_arr;
	unsigned int i;
	
	if (size == 0)
		return (NULL);
	ptr_arr = malloc(size);
	if (ptr_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr_arr[i] = c;
	}
	return (ptr_arr);
}
