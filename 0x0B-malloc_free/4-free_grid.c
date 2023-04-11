#include "main.h"
#include <stdlib.h>


/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: the grid of the int
 * @height: the height of the int
 * Return: 0 (Success)
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
