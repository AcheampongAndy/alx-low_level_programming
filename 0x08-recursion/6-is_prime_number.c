#include "main.h"
/**
* prime - check for prime number
* @number: the number to check
* @factor: the factor of the number
* Return: 1 or 0
*/
int prime(int number, int factor)
{
	if (number % factor == 0)
	{
		if (number == factor)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime(number, factor + 1));
}
/**
* is_prime_number - check for prime
* @n: the number to check
* Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
