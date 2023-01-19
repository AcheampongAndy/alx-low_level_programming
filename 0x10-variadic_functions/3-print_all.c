#include "variadic_functions.h"
/**
* print_all - print all
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int x = 0, y = 0, z;
	char *s;
	va_list arg;
	const char type[] = "sfic";

	va_start(arg, format);
	while (format && format[x])
	{
		z = 0;
		while (type[z])
		{
			if (format[x] == type[z] && y == 1)
			{
				printf(", ");
				break;
			} z++;
		}
		switch (format[x])
		{
			case 's':
				s = va_arg(arg, char *), y = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			case 'f':
				printf("%f", va_arg(arg, double)), y = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int)), y = 1;
				break;
			case 'c':
				printf("%c", va_arg(arg, int)), y = 1;
				break;
		} x++;
	}
	printf("\n"), va_end(arg);
}
