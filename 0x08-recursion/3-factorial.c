#include "main.h"
/**
* factorial - the factorial of a number
* @n: the number
* Return: -1 if n is lower than 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
