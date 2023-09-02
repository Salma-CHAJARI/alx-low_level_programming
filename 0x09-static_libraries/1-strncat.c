#include "main.h"
/**
 * _strncat - concatenate string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to copie
 *
 * Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
