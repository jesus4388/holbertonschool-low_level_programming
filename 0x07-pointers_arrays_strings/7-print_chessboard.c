#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: string
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			if (c != 7)
			{
				_putchar (a[b][c]);
			}
			else
			{
				_putchar (a[b][c]);
				_putchar (10);
			}
		}
	}
}
