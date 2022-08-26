#include "search_algos.h"
/**
 * linear_search - look up a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (value);
			}
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		}
		return (-1);
	}
	else
		return (-1);
}
