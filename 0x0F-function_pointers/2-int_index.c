#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: the array of containing integer to be found
 *@size: the size of the array
 *@cmp: the function to be executed in the array
 *
 *Return: the index of the element if successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] && cmp)
			{
				cmp(array[i]);
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
