#include <stddef.h>
/**
 * array_iterator - a function that executes a function
 * @array: array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size > 0)
	{
		for (i = 0; i < size; i++)
		(*action)(array[i]);
	}
}
