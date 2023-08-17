#include "main.h"/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: long of diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
