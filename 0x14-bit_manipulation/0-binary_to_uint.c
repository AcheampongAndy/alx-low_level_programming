#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int power(int base, int exp)
{
	int x, num;

	num = 1;
	x = 0;
	while (x < exp)
	{
		num *= base;
		++x;
	}

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int length, i;

	sum = 0;
	if (b == NULL)
		return (sum);
	length = _strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * power(2, length - i - 1);
	}
	return (sum);
}
