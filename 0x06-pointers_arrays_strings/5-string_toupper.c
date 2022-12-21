#include "main.h"
/**
* *string_toupper - change lower to cap
* @u: the character to change
*
* Return: u
*/
char *string_toupper(char *u)
{
	int num = 0;

	while (u[num] != '\0')
	{
		if (u[num] >= 'a' && u[num] <= 'z')
		{
			u[num] = u[num] - 32;
		}
		num++;
	}
	return (u);
}
