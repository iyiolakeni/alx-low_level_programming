#include "main.h"
/**
 * print_alphabet_x10- prints 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char c;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
