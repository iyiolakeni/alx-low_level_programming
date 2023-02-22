#include "main.h"
/**
 * print_times_table- print times table
 * @n: number to be times
*/
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 0; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				int times = j * i;

				if (times <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				} else if (times > 99)
				{
					_putchar('0' + (times / 100));
					_putchar('0' + ((times / 10) % 10));
					_putchar('0' + (times % 10));
				} else
				{
					_putchar(' ');
					_putchar('0' + (times / 10));
					_putchar('0' + (times % 10));
				}
			}
			_putchar('\n');
		}
	}
}
