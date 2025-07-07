#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid to free.
 * @height: The height of the grid (number of rows).
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	/* free each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* free the grid ptr itself */
	free(grid);
}
