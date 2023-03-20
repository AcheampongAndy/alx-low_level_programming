#include "main.h"
/**
* _puts - prints a string
* @str: the string to print
*
* Return: void
*/
void _puts(char *str)
{
	int lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		_putchar(str[lenght]);
		lenght++;
	}
	_putchar('\n');
}
