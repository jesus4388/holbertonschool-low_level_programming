#include "main.h"
/**
 * print_triangle - draws a diagonal line on the terminal
 * @size: repetitions
 * Return: 0
 */
void print_triangle(int size)
{
	int b = 0;
	int c = 0;

	if (size <= 0)
	_putchar(10);

		for (b = 1; b <= size; b++)
		{
			for (c = 1; c <= size; c++)
			{
				if (c <= (size - b))
				{
				_putchar(' ');
				}
				else
				{
				_putchar('#');
				}
			}
		_putchar('\n');
		}

}
