#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char alpha;

	while (num < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		num++;
		_putchar('\n');
	}
}
