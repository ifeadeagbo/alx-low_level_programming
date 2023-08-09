#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int x; 
	int y;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		gridout[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			gridout[x][y] = 0;

	return (grid);
}
