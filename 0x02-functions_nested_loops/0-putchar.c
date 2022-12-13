#include "main.h"
/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char name[8] = "_putchar";

	while (n < 9)
	{
		_putchar(name[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
