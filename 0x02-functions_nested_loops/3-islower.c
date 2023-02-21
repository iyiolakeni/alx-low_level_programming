#include "main.h"
#include <ctype.h>
/**
 * _islower- checks for lowercase
 * Return: 0 or 1 as success
 * @c: input received
*/
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
