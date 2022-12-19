#include "main.h"
/**
* rev_string - reverse string
* @s: the string involve
*
* Return: void
*/
void rev_string(char *s)
{
	int num, mid, high;
	char beggin, end;

	num = 0;
	while (s[num] != '\0')
	{
		num = num + 1;
	}
	high = num - 1;
	for (mid = high / 2; mid >= 0; mid--)
	{
		beggin = s[high - mid];
		end = s[mid];
		s[mid] = beggin;
		s[high - mid] = end;
	}
}
