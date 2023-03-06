#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination
 * @src: source
 * @n: size of array
 * Return: dest if valid
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		memcpy(dest, src, n);
	return (dest);
}
