#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	j = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (j > 0)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
		j--;
	}
}
