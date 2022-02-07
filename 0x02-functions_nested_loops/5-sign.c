#include "main.h"
/**
 * print_sign -- description print sign
 * @n: compare the value with respect to 0
 * Return: if it is greater than zero it is + if it is less than zero it is -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	return (0);
}
