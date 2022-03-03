#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - a function that creates an array of integers
 * @min: min
 * @max: max
 * Return: p or 0
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i = 0;
	int b = 0;

	if (min > max)
		return (NULL);
	
	p = malloc(sizeof(int) * (max - min + 1));
	if (p != NULL)
	{
		for (i = min; i <= max; i++)
			p[b++] = i;
	}
	else
			return (NULL);
	return (p);
}
