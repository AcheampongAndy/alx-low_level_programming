#include "main.h"
/**
* *_memset - fills memory with a constant byte
* @s: string array
* @b: constant byte
* @n: number byte
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
