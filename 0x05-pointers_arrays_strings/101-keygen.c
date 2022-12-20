#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* randPassGen - a function that generate random password
* @num: the length of the password
*
* Return: void
*/
int main(void)
{
	int random, count;
	time_t clock;

	srand((unsigned int) time(&clock));
	
	random = 0;
	count = 0;
	for (count = 0; count < 2772; count = count + random)
	{
		random = rand() % 128;
		if ((count + random) > 2772)
		{
			break;
		}
		printf("%c", random);
	}
	printf("%c\n", (2772 - count));
	return (0);
}
