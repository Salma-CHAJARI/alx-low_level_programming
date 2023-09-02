#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: the character checked
 * Return:1 if lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
