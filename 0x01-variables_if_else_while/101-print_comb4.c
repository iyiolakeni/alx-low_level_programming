#include <stdio.h>
/**
 * main- 3 different digits combination
 * Return: 0 always
*/
int main(void)
{
	int a;
	int b;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (b = 0; b < 10; b++)
		{
			for (a = 0; a < 10; a++)
			{
				if (c > b && b > a)
				{
					putchar('0' + c);
					putchar('0' + b);
					putchar('0' + a);
					if (c != 7 || b != 8 a != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
