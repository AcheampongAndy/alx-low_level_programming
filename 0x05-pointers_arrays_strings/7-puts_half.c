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
	half = num / 2;
	while (half <= num)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
