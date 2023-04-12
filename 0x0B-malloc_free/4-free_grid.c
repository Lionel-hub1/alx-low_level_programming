#include "main.h"

/**
 * free_grid - This function is able to free 2D array allocated
 * @grid: Is the 2D array I created before
 * @height: Is the height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
