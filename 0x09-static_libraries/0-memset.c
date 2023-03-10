#include "main.h"

/**
 * _memset - function fills first n bytes of memory area pointed
 * by s with the constant byte b
 * @s: memory s
 * @b: constant byte
 * @n: size of array
 * Return: S if true
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
