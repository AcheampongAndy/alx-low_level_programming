#include "main.h"
/**
* *cap_string - captilize every word
* @u: the string
*
* Return: u
*/
char *cap_string(char *u)
{
	int num, num1;

	int symbol[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (num = 0; u[num] != '\0'; num++)
	{
		for (num1 = 0; symbol[num1] != '\0'; num1++)
		{
			if (u[num] == symbol[num1])
			{
				num++;
				num1 = 0;
				while (symbol[num1] != '\0')
				{
					if (u[num] == symbol[num1])
					{
						num++;
					}
					num1++;
				}
				if (u[num] >= 'a' && u[num] <= 'z')
				{
					u[num] = u[num] - 32;
				}
				break;
			}
		}
	}
	return (u);
}
