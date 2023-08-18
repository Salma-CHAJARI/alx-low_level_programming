#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print
 */

void print_number(int n)
{
	int div = 1;
	int t = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (t / 10 > 0)
	{
		div *= 10;
		t /= 10;
	}

	while (div > 0)
	{
		int digit = n / div;

		_putchar(digit + '0');
		n %= div;
		div /= 10;
	}
}
