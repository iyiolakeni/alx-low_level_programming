#include "main.h"
/**
 *print_alphabet- prints the alphabets, in lowercase
 * Return: 0 always
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
