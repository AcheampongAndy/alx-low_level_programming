#include "main.h"
/**
* _strcpy - copies the string pointed to by src
* @src: the string to copy from
* @dest: the string to copy into
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int num2;

	num2 = 0;
	while (*(src + num2) != '\0')
	{
		dest[num2] = *(src + num2);
		num2++;
	}
	dest[num2] = '\0';
	return (dest);
}
