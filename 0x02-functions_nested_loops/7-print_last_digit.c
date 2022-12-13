#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to prints the last digit of a number
 *
 *
 * Return: num1
 */
int print_last_digit(int n)
{
	int num = n % 10;

	if (n < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
