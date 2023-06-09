#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - creates a two dimensional array
 *@width: the width of the array
 *@height: the height of the array
 *
 *Return: the created array or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr_grid = malloc((height * sizeof(int *)));
	if (ptr_grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr_grid[i] = malloc((width * sizeof(int)));
		if (ptr_grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr_grid[i]);
			free(ptr_grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr_grid[i][j] = 0;
		}
	}
	return (ptr_grid);
}
