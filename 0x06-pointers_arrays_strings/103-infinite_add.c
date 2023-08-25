#include "main.h"

/**
 * rev_string - reverse array dn: integer parans
 * @n: integer
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0, j = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
	i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
	tmp = *(n + j);
	*(n + j) = *(n + i);
	*(n + i) = tmp;
	}
}

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digit = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
	i++;
	while (*(n2 + j) != '\0')
	j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (NULL);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
	if (i < 0)
	val1 = 0;
	else
	val1 = *(n1 + i) - '0';
	if (j < 0)
	val2 = 0;
	else
	val2 = *(n2 + j) - '0';
	temp_tot = val1 + val2 + overflow;
	if (temp_tot >= 10)
	{
	overflow = 1;
	temp_tot -= 10;
	}
	else
	overflow = 0;

	if (digit >= (size_r - 1))
	return (NULL);
	*(r + digit) = temp_tot + '0';
	digit++;
	j--;
	i--;
	}
	if (digit == size_r)
	return (NULL);
	*(r + digit) = '\0';
	rev_string(r);
	return (r);
}
