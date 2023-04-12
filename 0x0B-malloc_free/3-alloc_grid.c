#include "main.h"

/**
 * alloc_grid - This function returns a pointer on 2D array
 * @width: This is the width
 * @height: This is the height
 * Return: The pointer of the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, *ptr;
	
	if (width <= 0 || height <= 0)
		return NULL;
	
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return NULL;
	
	ptr = malloc(width * height * sizeof(int));
	
	if (ptr == NULL)
	{
		free(grid);
		return NULL;
	}
	
	for (i = 0; i < height; i++)
		grid[i] = ptr + i * width;

	return grid;
}
