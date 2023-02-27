#include "main.h"
#include "2-strlen.c"
/**
* puts_half- prints half of a string
* @str: letter to be checked
*
*
*/
void puts_half(char *str)
{
	int i;
	int n;

	if (_strlen(str) % 2 != 0)
	{
		n = (_strlen(str) - 1) / 2;
	}
	else
	{
		n = 0;
	}
	for (i = n; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
