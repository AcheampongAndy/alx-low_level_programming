#include "main.h"
/**
* _strcmp - compares two string
* @s1: first string
* @s2: second string
*
* Return: other a number when the 
* stings are not equal but zero otherwize
*/
int _strcmp(char *s1, char *s2)
{
	int compare, iterate;

	compare = 0;
	for (iterate = 0; compare == 0; iterate++)
	{
		if (*(s1 + iterate) == '\0' && *(s2 + iterate) == '\0')
		{
			break;
		}
		compare = *(s1 + iterate) - *(s2 + iterate);
	}
	return (compare);
}
