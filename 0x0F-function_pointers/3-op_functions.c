#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add
 * @a: number 1
 * @b: number 2
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: number 1
 * @b: number 2
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: number 1
 * @b: number 2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: number 1
 * @b: number 2
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
		return (a / b);
}
/**
 * op_mod - modulo
 * @a: number 1
 * @b: number 2
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
		return (a % b);
}
