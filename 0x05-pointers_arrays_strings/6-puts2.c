#include "main.h"
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string
 * @str: pointer
 * Return: string
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n]; n++)
	{
		if (n % 2 == 0)
		_putchar(str[n]);
	}
	_putchar(10);
}
