#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	i = size;
	while (i > 0)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		for (j = i; j <= size; j++)
			_putchar('#');
		_putchar('\n');
		i--;
	}
}
