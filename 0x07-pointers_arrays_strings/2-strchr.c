#include "main.h"
#define NULL 0
/**
* *_strchr - ocates a character in a string
* @s: the string array
* @c: located strings
* Return: c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
