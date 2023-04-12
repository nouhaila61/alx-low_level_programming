#include "main.h"
/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If memory allocation fails or either width or height is zero or
 *         negative - NULL.
 *         Otherwise - a pointer to the newly-allocated space in memory
 *         containing the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *data;
	int i;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(*grid) * height);
		if (grid == NULL)
		return (NULL);

	data = malloc(sizeof(*data) * width * height);
	if (data == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	grid[i] = &data[i * width];

	return (grid);
}

