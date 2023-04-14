#include "main.h"
#include <stdlib.h>
/**
 *array_range - returns and array from min to max
 *@min: the minimum integer
 *@max: the maximum integer
 *
 *Return: the array of intergers
 */
int *array_range(int min, int max)
{
	int size, i;
	int *range;

	if (min > max)
		return (NULL);
	size = (max - min + 1) * sizeof(int);
	range = malloc(size);
	for (i = 0; min <= max; i++)
	{
		range[i] = min++;
	}
	if (range == NULL)
		return (NULL);
	return (range);
}
