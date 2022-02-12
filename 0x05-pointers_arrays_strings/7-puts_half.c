#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of the string
 * @str: print half of line
 * Return: print
 */
void puts_half(char *str)
{
	int n = 0;

	n = strlen(str);

	if (n % 2 != 0)
	{
		n = n + 1;
		n = n / 2;

		for (; str[n]; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		n = n / 2;

		for (; str[n]; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar(10);
}


