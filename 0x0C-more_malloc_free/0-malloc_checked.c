#include "main.h"
/**
* *malloc_checked - allocates memory
* @b: value involved
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
