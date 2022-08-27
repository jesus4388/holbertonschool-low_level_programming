#include <stdio.h>
/**
 * print - print
 * @array: pointer to the first element of the array to search in
 * @incio: inicio del array
 * @fin: fin del array
 * Return: long
 */
int print(int *array, int incio, int fin)
{
	int j = 0, i = 0;

	printf("Searching in array: ");
	for (j = 0, i = incio; i <= fin; i++, j++)
	{
		if (i < fin)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	return (j - 1);
}
/**
 * search - search
 * @array: pointer to the first element of the array to search in
 * @incio: inicio del array
 * @fin: fin del array
 * @value: value
 * Return: index
 */
int search(int *array, int incio, int fin, int value)
{
	int j = 0, mitad = 0;

	if (array == NULL)
		return (-1);
	j = print(array, incio, fin);
	mitad = incio + (j / 2);
	if (array[mitad] == value)
		return (mitad);
	if (incio == fin)
		return (-1);
	if (value > array[mitad])
		return (search(array, mitad + 1, fin, value));
	if (value < array[mitad])
		return (search(array, incio, mitad - 1, value));
	return (-1);
}
/**
 * binary_search - search
 * @array: pointer to the first element of the array to search in
 * @size: size
 * @value: value
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (search(array, 0, size - 1, value));
}
