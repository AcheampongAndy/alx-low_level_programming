#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
/**
* randPassGen - a function that generate random password
* @num: the length of the password
*
* Return: void
*/
void randPassGen(int N)
{
	int num;

	num = 0;
	srand((time(NULL) * (getpid())));
	
	char *number = "0123456789";
	int number_len = strlen(number);

	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	int alpha_len = strlen(alpha);

	char *ALPHA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int ALPHA_len = strlen(ALPHA);

	char *symbol = "!@#$%^&*><?|:~";
	int symbol_len = strlen(symbol);

	char *password = malloc(N + 1);
	free(password);

	while (num < N)
	{
		int random = rand() % 4;
		if (random == 0)
		{
			password[num] = number[rand() % number_len];
		}
		else if (random == 1)
		{
			password[num] = alpha[rand() % alpha_len];
		}
		else if (random == 2)
		{
			password[num] = symbol[rand() % symbol_len];
		}
		else
		{
			password[num] = ALPHA[rand() % ALPHA_len];
		}
		num++;
	}
	password[num] = '\0';
	printf("Password: %s\n", password);
}

int main()
{
	int N = 10;

	// Function Call
	randPassGen(N);

	return 0;
}
