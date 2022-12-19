#include "main.h"
/**
* print_rev - print reverse
* @s: the character involved
*
*Return: void
*/
void print_rev(char *s)
{
	int num;

	num = 0;
	while (s[num] != '\0')
	{
		num++;
	}
	num = num - 1;
	while (num >= 0)
	{
		_putchar(s[num]);
		num--;
	}
	_putchar('\n');
}
