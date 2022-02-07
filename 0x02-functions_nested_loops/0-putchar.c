#include "main.h"
/**
 * main - main
 * Return: 0
 *
 * Decription: prints _putchar
 *
 */

int main(void)
{
	char ll[8] = "_putchar";
	int la;

	for (la = 0; la <= 7; la++)
		_putchar(ll[la]);

	_putchar('\n');
	return (0);
}
