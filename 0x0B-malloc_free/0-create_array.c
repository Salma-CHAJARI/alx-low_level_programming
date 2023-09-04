#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: size of array
 * @c: the character to use
 * Return: ptr, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);
	ar = (char *)malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (size)
	{
		ar[size - 1] = c;
		size--;
	}
	return (ar);
}
