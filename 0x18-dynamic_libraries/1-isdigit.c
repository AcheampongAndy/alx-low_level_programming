#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the value invole
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= (0 + '0') && c <= (9 + '0'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
