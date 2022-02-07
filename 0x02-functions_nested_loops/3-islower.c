#include "main.h"
/**
 * _islower - - description: a function that checks the lowercase character.
 * @c: if it is c it is equal to 1
 * Return: 1 sucess or 0 in fail
 */

int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
