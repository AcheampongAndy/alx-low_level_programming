#include "main.h"
#define NULL 0
/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: the string array
* @accept: located strings
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				return (s + x);
			}
		}
	}
	return (NULL);
}
