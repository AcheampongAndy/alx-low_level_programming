#include "main.h"
/**
* *leet - convert letter to numbers
* @u: the string involved
*
* Return: u
*/
char *leet(char *u)
{
	int num;

	int letters[] = {97, 101, 111, 116, 108};
	int LETTERS[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	for (num = 0; u[num] != '\0'; num++)
	{
		int num1;

		for (num1 = 0; num1 < 5; num1++)
		{
			if (u[num] == letters[num1] || u[num] == LETTERS[num1])
			{
				u[num] = numbers[num1];
			}
		}
	}
	return (u);
}
