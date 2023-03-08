#include "main.h"

/**
 * _pow_recursion- function to print x raised to power y
 * @x: integer
 * @y: power of x
 * Return: -1 as y= 0 or success;
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
