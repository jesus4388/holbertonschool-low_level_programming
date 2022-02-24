#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
/**
 * palindrome - function auxiliar
 * @s: string
 * @inicio: string 1
 * @final: string  2
 * Return: 1 or 2
 */
int palindrome(char s[], int inicio, int final)
{
	if (inicio == final)
		return (1);
	else if (s[inicio] != s[final])
		return (0);
	else if (inicio < final + 1)
		return (palindrome(s, inicio + 1, final - 1));
	return (1);
}
/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 or 2
 */
int is_palindrome(char *s)
{
	int e = 0;

	e = _strlen_recursion(s) - 1;
	return (palindrome(s, 0, e));
}
