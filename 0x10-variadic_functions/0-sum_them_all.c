#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - compute sum of parameters
 * @n: number of parameters
 * Return: sum (integer)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int add;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(arg, n);
	add = 0;
	for (x = 0; x < n; x++)
	{
		add += va_arg(arg, int);
	}
	va_end(arg);

	return (add);
}
