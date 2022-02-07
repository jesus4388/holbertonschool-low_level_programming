#include "main.h"
/**
 * print_alphabet - description: alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
