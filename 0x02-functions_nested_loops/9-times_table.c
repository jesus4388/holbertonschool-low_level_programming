#include "main.h"
/**
 * times_table - prints the 9 times table
 * nothign void function
 * Return: 1 sucess or 0 in fail
 */
void times_table(void)
{
	int a, b, res;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			res = a * b;
			if (b != 0)
			{
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
				}
			}
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
		if (b == 9)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(',');
		}
		}
	}
}
