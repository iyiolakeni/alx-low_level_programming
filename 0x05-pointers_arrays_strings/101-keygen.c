#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 8 /* password length */
#define CHARS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\"\\|,.<>/?`~"
/* characters to use in the password */
/**
 * main- main program
 * Return: 0
 */
int main()
{
	int length = LENGTH;
	int len = length + 1;
	srand(time(NULL)); /* seed the random number generator */
	char password[len]; /* password array */

	/* loop to generate the password */
	for (int i = 0; i < length; i++)
	{
		password[i] = CHARS[rand() % (sizeof(CHARS) - 1)];
		/* select a random character from the character set */
	}
	password[length] = '\0'; /* null-terminate the string */
	printf("Password: %s\n", password); /* print the password */
	return (0);
}
