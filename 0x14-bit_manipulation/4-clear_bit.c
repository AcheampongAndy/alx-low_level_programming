#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer
 * @index: index to set 1
 * Return: integer (1 success, -1 error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	x = 1;
	x = x << index;
	x = ~x;
	*n = *n & x;

	return (1);
}
