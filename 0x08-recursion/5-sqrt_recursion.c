#include "main.h"
/**
 * raiz - returns the natural square root of a number
 * @b: root
 * @n: number natural
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
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (raiz(n, 1));
}
