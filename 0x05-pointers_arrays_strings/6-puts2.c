#include "main.h"
/**
* puts2 - prints even characters
* @str: the string to print
*
* Return: void
*/
void puts2(char *str)
{
	int lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		if (str[lenght] % 2 == 0)
		{
			_putchar(str[lenght]);
		}
		lenght = lenght + 1;
	}
	_putchar('\n');
}
