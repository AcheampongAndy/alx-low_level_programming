#include "main.h"
/**
* print_number - print an integer
* @n: the integer
*
* Return: void
*/
void print_number(int n)
{
	int iterate, number;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	number = n;
	iterate = 1;
	while (number > 9)
	{
		number = number / 10;
		iterate *= 10;
	}
	while (iterate >= 1)
	{
		_putchar((n / iterate) % 10 + '0');
		iterate = iterate / 10;
	}
}
