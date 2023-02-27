#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>

/** randomPassword- function to generate random
 * password of length
 * @N: number to generate
 */
void randomPassword(int n)
{
	/* Counters declaration and initialization */
	int i = 0;
	int randomizer = 0;

	/* Seed random numbers with currernt time
	 * so that it changes in time
	 */
	srand((unsigned int)(time(NULL)));

	/* Create an Array of numbers */
	char num[] = {1,2,3,4,5,6,7,8,9,0};

	/* Arrays of alphabets */
	char let[] = "abcdefghijklmonpqrstuvwxyz";
	char letup[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/* Array of special symbols */
	char sym[] = "!@#$%^&*()_+?:{}][|";

	/* Store random passowrd */
	char password[n];

	/* Select randomizer inside loop */
	randomizer = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (randomizer == 1)
		{
			password[i] = num[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = sym[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = letup[rand() % 276];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = let[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

/**
 * main- main program
 * Return 0 always
 */
int main()
{
	int N = 10;

	randomPassword(N);

	return (0);
}
