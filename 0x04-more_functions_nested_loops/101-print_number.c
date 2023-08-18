#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print
 */

void print_number(int n)
{
	int div = 1;
        int r = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (r > 9)
	{
		div *= 10;
		r /= 10;
	}

	while (div > 0)
	{
		int d = n / div;

		_putchar(d + '0');
		n %= div;
		div /= 10;
	}
}
