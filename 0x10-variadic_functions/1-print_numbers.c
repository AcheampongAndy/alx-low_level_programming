#include "variadic_functions.h"
/**
* print_numbers - print numbers
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int y;
	va_list arg;

	va_start(arg, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(arg, int);
		printf("%d", y);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
