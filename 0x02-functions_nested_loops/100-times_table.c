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
			for (j = 0; j <= n; j++)
			{
				int times = j * i;

				if (j == 0)
				{
					_putchar('0');
				} else if (times <= 9)
				{
					write(',', ' ', ' ', ' ', '0' + times);
				} else if (times > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (times / 100));
					_putchar('0' + ((times / 10) % 10));
					_putchar('0' + (times % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (times / 10));
					_putchar('0' + (times % 10));
				}
			}
			_putchar('\n');
		}
	}
}
