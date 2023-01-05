#include "main.h"
/**
* squareRoot - find the root
* @number: the number to find its roots
* @base: the root
* Return: root
*/
int squareRoot(int number, int base)
{
	if (number == base * base)
	{
		return (base);
	}
	else if (base > number / base)
	{
		return (squareRoot(number, base - 1));
	}
	else if (base < number / base)
	{
		return (squareRoot(number, base + 1));
	}
	else
	{
		return (-1);
	}
}
/**
* _sqrt_recursion - the square root of a number
* @n: the number
* Return: result
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (squareRoot(n, 2));
}
