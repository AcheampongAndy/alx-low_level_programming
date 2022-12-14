#include "main.h"
/**
* puts_half - prints half
* @str: the characters
*
*Return: void
*/
void puts_half(char *str)
{
	int half, num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	if (num % 2 == 0)
	{
		half = num / 2;
		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = (num - 1) / 2;
		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\n');
}
