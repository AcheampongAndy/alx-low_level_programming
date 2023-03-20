#include "main.h"
/**
* *_memcpy - that copies memory area.
* @src: string array
* @dest: string array
* @n: number byte
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
