#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: p
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i, j = 0;

	if (width <= 0)
	{	free(p);
		return (p);
	}
	if (height <= 0)
	{	free(p);
		return (p);
	}

	p = (int **)malloc(height * sizeof(int *));
	if (p != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *)malloc(width * sizeof(int));
			if (p[i] == NULL)
			{
				for (i = 0; p[i]; i++)
				{
				free(p[i]);
				}
				free(p);
				return (NULL);
			}
		}

		for (i = 0; p[i]; i++)
		{
			for (j = 0; p[i][j]; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
	}
	free(p);
	return (p);
}
