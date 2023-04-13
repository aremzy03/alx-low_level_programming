#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: the size of the element
 *
 *Return: no return value
 */
void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
