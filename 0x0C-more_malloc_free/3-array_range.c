#include "main.h"
/**
 * array_range - an array
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *s;
	int x;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(*s) * ((max - min) + 1));

	if (s == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		*(s + x) = min;

	return (s);
}
