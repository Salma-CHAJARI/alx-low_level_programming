#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first number
 * @b: second number
 * Return: NULL
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
