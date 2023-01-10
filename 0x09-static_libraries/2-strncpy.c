#include "main.h"
/**
* *_strncpy - copies a sting
* @dest: the string to copy to
* @src: the sting to copy from
* @n: the number of bytes
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int num;

	num = 0;
	while (num < n && src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}

	return (dest);
}
