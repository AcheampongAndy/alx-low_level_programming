#include "main.h"
/**
 * _isupper - check uppercase alphabets
 * @c: character
 * Return: 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

