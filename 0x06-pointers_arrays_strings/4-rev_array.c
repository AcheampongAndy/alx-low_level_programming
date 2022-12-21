#include "main.h"
/**
* reverse_array - reverses the content of an array
* @a: array of integers
* @n: the number of elements to swap
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int middle, swap, iterate;

	middle = n / 2;
	for (iterate = 0; iterate < middle; iterate++)
	{
		/* store first character in swap */
		swap = a[iterate];
		/* swap the first with the last */
		a[iterate] = a[n - iterate - 1];
		/* swap the last with the first */
		a[n - iterate - 1] = swap;
	}
}
