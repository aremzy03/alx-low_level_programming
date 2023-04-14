#include "main.h"
#include <stdlib.h>
/**
 *_realloc - returns the realoc
 *@ptr: the old memory alloclation
 *@old_size: the old size
 *@new_size: the new size
 *
 *Return: the realloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *real, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	real = malloc(new_size);
	if (!ptr)
		return (real);
	if (!real)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
		{
			real[i] = old_ptr[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			real[i] = old_ptr[i];
			i++;
		}
	}
	free(ptr);
	return (real);
}
