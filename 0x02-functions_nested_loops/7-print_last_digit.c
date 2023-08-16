#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: the number used
 * Return:  the value of the last digit
 */

int print_last_digit(int n)
{
	int rest = n;

	if (n < 0)
		n = -n;
	rest = n % 10;
	if (rest < 0)
		rest = -rest;
	_putchar(rest + '0');
	return (rest);
}
