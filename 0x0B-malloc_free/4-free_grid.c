#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees the allocated memmory space of grid
 *@grid: the allocated grid
 *@height: the height of the grid
 *
 *Return: no return value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
