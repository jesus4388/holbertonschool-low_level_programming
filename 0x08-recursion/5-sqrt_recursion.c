#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @b: root
 * @raiz: function
 * Return: -1 or root
 */
int raiz(int n, int b)
{
	if (b * b  == n)
		return (b);
	else if (b * b > n)
		return (-1);
	else
		return (raiz(n, (b + 1)));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number natural
 */
int _sqrt_recursion(int n)
{
	return (raiz(n, 1));
}
