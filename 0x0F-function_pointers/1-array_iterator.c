#include "function_pointers.h"
/**
 *array_iterator - executes the function for each array
 *@array: the array containing the parameters of the functions
 *@size: the size of the array
 *@action: the actions taken in the each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] && action)
			action(array[i]);
	}
}
