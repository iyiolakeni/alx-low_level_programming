#include "main.h"

/**
 * primechecker - check if it is a prime number
 * @i: helper int
 * @n: integer
 * Return: value
 */
int primechecker(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (primechecker(i + 1, n));
	return (1);
}

/**
 * is_prime_number- function to find prime number
 * @n: number to be checked
 * Return: 0 as failure or 1 as success
*/

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (primechecker(i, n));
}

