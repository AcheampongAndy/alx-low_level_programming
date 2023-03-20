#include "main.h"
/**
* _strlen - the lenght of a string
* @s: the string
*
* Return: lenght
*/
int _strlen(char *s)
{
	int lenght;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght = lenght + 1;
	}
	return (lenght);
}
