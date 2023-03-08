#include "main.h"

/**
 * factorial- print factorial of a given number
 * @n: Number to be used
 * Return: factorial or -1 as failure
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
