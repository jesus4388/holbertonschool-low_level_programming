#include "main.h"
/**
 * jack_bauer - - description: returns the minutes and hours
 * return: the minutes and hours
 *
 */
void jack_bauer(void)
{
	int hours, minutes
		;
	for (hours = 0; hours < 24; hours++)
	{
	for (minutes = 0; minutes < 60; minutes++)
	{
		_putchar((hours / 10) + 48);
		_putchar((hours % 10) + 48);
		_putchar(':');
		_putchar((minutes / 10) + 48);
		_putchar((minutes % 10) + 48);
	_putchar('\n');
	}
	}
}
