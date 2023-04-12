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
	int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);

			free(grid);
			return (NULL);
		}

		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
