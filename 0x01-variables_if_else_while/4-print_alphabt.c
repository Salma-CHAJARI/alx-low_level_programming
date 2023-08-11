#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char law;

	for (law = 'a'; law <= 'z'; law++)
	{
	if (law != 'e' && law != 'q')
	putchar(law);
	}
	putchar('\n');
	return (0);
}
