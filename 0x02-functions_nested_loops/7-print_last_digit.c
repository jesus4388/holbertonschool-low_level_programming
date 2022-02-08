#include "main.h"
/**
 * print_last_digit - - description print the last digit
 * @x: last digit
 * Return: last digit
 */

int print_last_digit(long int x)
{
	if (x < 0)
	{
	x = x * -1;
	}
	_putchar ((x % 10) + '0');
	return (x % 10);
}
