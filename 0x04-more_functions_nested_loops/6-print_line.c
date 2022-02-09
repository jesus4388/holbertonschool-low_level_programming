#include "main.h"
/**
 * print_line - - print a line
 * @n: number of _
 * Return:_
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
		{
		for (a = 0; a < n; a++)
			_putchar('_');
		}
	_putchar(10);
}

