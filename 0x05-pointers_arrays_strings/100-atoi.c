#include "main.h"
/**
* _atoi - convert string to integer
* @s: the string to convert
*
* Return: number
*/
int _atoi(char *s)
{
	int index, number, sign;

	index = 0;
	number = 0;
	sign = 1;
	while (*(s + index) != '\0')
	{
		/* check for negative numbers */
		if (*(s + index) == '-')
		{
			sign *= -1;
		}
		/* take only numbers from 0 to 9 */
		if (*(s + index) >= '0' && *(s + index) <= '9')
		{
			number = number * 10 + *(s + index) - '0';
		}
		index++;
	}
	/* multiply number and sign to maintain the sign */
	number = number * sign;
	return (number);
}
