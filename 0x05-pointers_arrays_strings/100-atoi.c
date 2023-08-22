#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: integer.
 */

int _atoi(char *s)
{
	short boolean;
	int i, m, result;

	i = m = result = boolean = 0;
	m = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			m *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= m;
	return (result);
}
