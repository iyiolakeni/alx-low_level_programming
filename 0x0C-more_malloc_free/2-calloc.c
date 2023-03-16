#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc- function to allocate memory for an array
 * @nmemb: integer elmements
 * @size: bytes of array
 * Return: NULL or memory allocation
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int n;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = nmemb * size;
	mem = malloc(n);

	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < n; i++)
			mem[i] = 0;
	}
	return (mem);
}
