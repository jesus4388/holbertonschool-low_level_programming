#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: element
 * @size: number of elements
 * @cmp: pointer
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);

}
