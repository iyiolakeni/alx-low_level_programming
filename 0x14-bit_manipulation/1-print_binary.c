#include "main.h"
/**
 * print_binary - print binary
 * @n: integer to mess with
 */
void print_binary(unsigned long int n)
{
	unsigned long int count = 1;

	count <<= ((sizeof(count) * 8) - 1);
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
		}
	while (count > 0)
	{
		if ((count & n) == 0)
			count = count >> 1;
		else
			break;
	}
	while (count > 0)
	{
		if ((count & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		count = count >> 1;
	}

}
