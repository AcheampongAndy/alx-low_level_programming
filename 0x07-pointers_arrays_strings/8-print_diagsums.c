#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, diag1 = 0, diag2 = 0;

	for (x = 0; x < size; x++)
	{
		diag1 += a[(size + 1) * x];
		diag2 += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", diag1, diag2);
}
