#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of string, starting with first letter
 *
 * @str: string to be checked
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
