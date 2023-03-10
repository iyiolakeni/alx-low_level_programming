#include "main.h"

/**
 * _isupper- print uppercase
 * @c: letter
 * Return: 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
