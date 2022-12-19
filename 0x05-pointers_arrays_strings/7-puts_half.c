#include "main.h"
/**
* puts_half - prints half
* @str: the characters
*
*Return: void
*/
void puts_half(char *str)
{
	int half, num, max;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	max = num;
	half = num / 2;
	while (half <= max)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
