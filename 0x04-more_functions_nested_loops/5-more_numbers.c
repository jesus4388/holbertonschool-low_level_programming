#include "main.h"
/**
 * more_numbers - - prints 10 times, from 0 to 14, followed by a new line
 * Return: 10
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (a > 9)
			{
				_putchar((b / 10) + 48);
			}
				_putchar((b % 10) + 48);
		}
		b = 0;
		_putchar('\n');
	}
}
