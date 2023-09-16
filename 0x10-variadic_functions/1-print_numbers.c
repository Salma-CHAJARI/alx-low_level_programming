#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print variadic number
 * @separator: char
 * @n:variadic variable count
 * Return :void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lst);
}
