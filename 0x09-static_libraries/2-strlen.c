#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s:type char
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
