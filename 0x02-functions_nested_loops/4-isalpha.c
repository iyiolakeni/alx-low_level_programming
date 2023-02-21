#include "main.h"
#include <ctype.h>
/**
 * _isalpha- check for alphabets
 * @c: values to compare
 * Return: 1 if character or 0 as failed
*/
int _isalpha(int c)
{
	if (isalpha(c) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
