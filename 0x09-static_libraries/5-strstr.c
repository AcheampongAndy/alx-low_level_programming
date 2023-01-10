#include "main.h"
/**
* _strstr - function that locates a substring
* @haystack: string
* @needle: string to match
* Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int x, y, num, num1, init;

	num = 0;
	init = 0;

	for (num1 = 0; *(needle + num1) != '\0'; num1++)
	{
		num++;
	}
	for (x = 0; *(haystack + x) != '\0'; x++)
	{
		for (y = 0; y < num && *(needle + y) == *(haystack + x); y++, x++)
		{
			if (y == 0)
			{
				init = x;
			}
			else if (y == (num - 1))
			{
				return (haystack + init);
			}
		}
	}
	return (0);
}
