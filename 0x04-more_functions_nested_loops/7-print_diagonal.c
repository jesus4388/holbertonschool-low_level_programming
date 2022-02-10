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

	if (n > 0)
	{
		{
		for (b = 0; b < n; b++)
			{
			for (c = 0; c < d; c++)
				_putchar(' ');
			}
	c += 1;
		_putchar('\\');
		_putchar(10);
		}
	}
	else if (n <=0)
		_putchar(10);
}
