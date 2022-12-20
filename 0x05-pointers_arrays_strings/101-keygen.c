#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
/**
* randPassGen - a function that generate random password
* @num: the length of the password
*
* Return: void
*/
void randPassGen(int N)
{
	int num, random;

	num = 0;
	random = 0;
	srand((unsigned int)(time(NULL)));
	
	char number[] = "0123456789";

	char alpha [] = "abcdefghijklmnopqrstuvwxyz";

	char ALPHA [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char symbol [] = "!@#$%^&*><?|:~";

	char password[N];

	random = rand() % 4;
	while (num < N)
	{
		if (random == 1)
		{
			password[num] = number[rand() % 10];
			random = rand() % 4;
			printf("%c", password[num]);
		}
		else if (random == 2)
		{
			password[num] = alpha[rand() % 26];
			random = rand() % 4;
			printf("%c", password[num]);
		}
		else if (random == 3)
		{
			password[num] = symbol[rand() % 14];
			random = rand() % 4;
			printf("%c", password[num]);
		}
		else
		{
			password[num] = ALPHA[rand() % 26];
			random = rand() % 4;
			printf("%c", password[num]);
		}
		num++;
	}
	printf("\n");
}

int main()
{
	int N = 10;

	// Function Call
	randPassGen(N);

	return 0;
}
