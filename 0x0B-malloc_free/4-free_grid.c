#include "main.h"

/**
 * free_grid - free the gird
 * @gird: gird of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(gird[i]);
	free(grid);
}
