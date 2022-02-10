#include "main.h"
/**
 * print_diagonal - - diagonal line
 * @n: number
 * Return: 0
 */
void print_diagonal(int n)
{
	int b;
	int c;
	int d = 0;

	if (n <= 0)
		_putchar('\n');
	else
		{
		for (b = 0; b < n; b++)
			{
			for (c = 0; c > d; c++)
				_putchar(' ');
			}
		}
	c = d + 1;
		_putchar('\\');
		_putchar(10);
}
