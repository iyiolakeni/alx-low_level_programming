#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion-  to print string followed by a new linear_congruential
 * @s: string to be printed
 * Return: 0 always
*/

void _puts_recursion(char *s)
{
	if (s == '\0')
		return (0);
	puts(s);
}
