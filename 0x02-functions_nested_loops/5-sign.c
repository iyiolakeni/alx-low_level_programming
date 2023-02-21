#include "main.h"
/**
 * print_sign- print sign of number
 * @n: number to compare
 * Return: 1 as +, 0 as 0, -1 as -
*/
int print_sign(int n)
{
	if (n != 0)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
		_putchar('0');
		return (0);
	}
}
