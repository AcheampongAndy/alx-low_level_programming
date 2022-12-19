#include "main.h"
/**
* swap_int - swap integers
* @a: the first integer
* @b: the second integer
*
*Return: void
*/
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
