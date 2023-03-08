#include "main.h"

/**
 * sqrchecker - function to check if the number has a square root
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int sqrchecker(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = sqrchecker(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion- find square root of natural number
 * @n: natural number
 * Return: -1 if not natural number and _sqrt_recursion as success
*/

int _sqrt_recursion(int n)
{
    int i = 0;

    if (sqrchecker(i, n) == n && n != 1)
        return (-1);
    return (sqrchecker(i,n));
}

