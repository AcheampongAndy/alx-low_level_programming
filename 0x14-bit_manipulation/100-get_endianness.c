#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int x;
	char *_end;

	x = 1;
	_end = (char *)&x;

	if (*_end == 1)
		return (1);

	return (0);
}
