#include "main.h"
/**
 * prime - prime number
 * @a: prime number
 * @n: integer
 * Return: 1 or 0
 */
int prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	else if ((n % a) == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, a - 1));
	}
}
/**
 * is_prime_number - funcion
 * @n: integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime(n, n - 1));
	else
		return (0);
}
