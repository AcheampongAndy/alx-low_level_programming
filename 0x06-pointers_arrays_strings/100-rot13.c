#include "main.h"
/**
* *rot13 - a simple letter substitution cipher
* @u: the letters involved
*
* Return: u
*/
char *rot13(char *u)
{
	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char output[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int num, num1;

	for (num = 0; u[num] != '\0'; num++)
	{
		for (num1 = 0; num1 < 52; num1++)
		{
			if (u[num] == input[num1])
			{
				u[num] = output[num1];
				break;
			}
		}
	}
	return (u);
}
