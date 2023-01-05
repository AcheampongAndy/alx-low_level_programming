#include "main.h"
/**
* wildcmp - compares two strings
* @s1: the string to compare
* @s2: the string to compare
* Return: 1 or 0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}
