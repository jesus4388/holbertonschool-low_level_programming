#include <stdlib.h>
/**
 * free_grid - una función que libere una cuadrícula bidimensional
 * @grid: string
 * @height: string
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
