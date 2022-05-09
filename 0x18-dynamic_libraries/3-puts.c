#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: prints a string
 * Return: 0
 */
void _puts(char *str)
{
	int n = 0;

	for (n = 0; str[n]; n++)
	{
		_putchar(str[n]);
	}
		_putchar (10);
}
