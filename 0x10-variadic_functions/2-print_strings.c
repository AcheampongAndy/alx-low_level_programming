#include "variadic_functions.h"
/**
* print_strings - print strings
* @separator: string to be printed between the strings
* @n: number of strings passed to the function
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *z;
	va_list arg;

	va_start(arg, n);
	for (x = 0; x < n; x++)
	{
		z = va_arg(arg, char *);
		if (z == NULL)
			printf("nil");
		else
		{
			printf("%s", z);
			if (x != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(arg);
}
