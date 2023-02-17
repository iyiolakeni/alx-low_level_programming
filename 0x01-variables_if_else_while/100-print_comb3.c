#include <stdio.h>
/**
 * main-print multiple numbers with no duplicate digits
 * Return: 0 Always
*/
int main(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = (b + 1); a < 10; a++)
		{
			putchar(b);
			putchar(a);

			if (b != 8 || a != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
