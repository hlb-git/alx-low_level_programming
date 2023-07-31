#include "main.h"
/**
 * print_chessboard - board to print
 * @a: prints things
 * Return: returns crap
 */
void print_chessboard(char (*a)[8])
{
	int o;
	int j;

	for (o = 0; o < 8; o++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[o][j]);
		}
		_putchar('\n');
	}
}
