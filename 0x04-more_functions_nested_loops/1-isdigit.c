#include "main.h"

/**
 * _isdigit- print if it is a digit
 * @c: number
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
		return (1);
	else
		return (0);
	}
}
