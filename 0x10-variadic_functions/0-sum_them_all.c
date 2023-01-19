#include "variadic_functions.h"
/**
* sum_them_all - sum of all its parameter
* @n: the first parameter
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	int sum, y;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(arg, n);

	sum = 0;
	for (x = 0; x < n; x++)
	{
		y = va_arg(arg, int);
		sum = y + sum;
	}

	va_end(arg);

	return (sum);
}
