#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: size of array (number of integers)
 * @cmp: function pointer
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ans;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ans = cmp(array[i]);
		if (ans == 1)
			return (i);
	}
	return (-1);
}
