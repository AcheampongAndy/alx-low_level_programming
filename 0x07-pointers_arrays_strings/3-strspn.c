#include "main.h"
#include <stdio.h>
/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: prefix string
* Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0, y, x;

	for (x = 0; accept[x]; x++)
	{
		for (y = 0; s[y] != 32; y++)
		{
			if (accept[x] == s[y])
			{
				num++;
			}
		}
	}
	return (num);
}
