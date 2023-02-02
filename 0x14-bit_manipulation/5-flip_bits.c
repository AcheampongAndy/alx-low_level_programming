#include "main.h"

/**
 * flip_bits - returns the number of bits to flip number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int add;
	unsigned long int xor;

	add = 0;
	xor = n ^ m;
	for (; xor; xor = xor >> 1)
	{
		add += xor & 1;
	}
	return (add);
}
