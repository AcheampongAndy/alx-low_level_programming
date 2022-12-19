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
	while (num >= 0)
	{
		num--;
		_putchar(s[num]);
	}
	_putchar('\n');
}
