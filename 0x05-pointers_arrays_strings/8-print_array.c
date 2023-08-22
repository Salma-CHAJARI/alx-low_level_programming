#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: int
 * @n: int
 * Return: NULL.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
