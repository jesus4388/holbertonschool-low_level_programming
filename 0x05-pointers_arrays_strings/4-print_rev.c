#include "main.h"
#include <string.h>
/**
 * print_rev - a string in reverse
 * @s: string
 * Return:
 */
void print_rev(char *s)
{
	int n;
		for (n = strlen(s) - 1; n >= 0; n--)
		{
			_putchar(s[n]);
		}
	_putchar(10);
}
