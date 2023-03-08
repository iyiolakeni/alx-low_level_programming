#include "main.h"
#include <string.h>

/**
 * isPalrec - function to check for palindrome
 * @s: string to be checked
 * @i: integer
 * @j: integer
 * Return: 1 or 0
*/
int isPalrec(char *s, int i, int j)
{
	/* if there is only one character */
	if (i == j)
		return (1);

	/* if first and last character do not match */
	if (s[i] != s[j])
		return (0);

	/* if there are more than two characters */
	/* check middle substring if palindrome */
	if (i < j + 1)
		return (isPalrec(s, i + 1, j - 1));

	return (1);
}
/**
 * is_palindrome- function to check if string is palindrome
 * @s: string to be checked
 * Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int n = strlen(str);

	/* If string is empty it is palindrome*/
	if (n == 0)
		return (1);
	return (isPalrec(str, 0, n - 1));
}
