#include "main.h"
#include <string.h>
/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */

void print_rev(char *s)
{
	int i, n = strlen(s);

	for (i = n -1; i >= 0; i--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
