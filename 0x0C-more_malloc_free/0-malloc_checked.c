#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked- fucntion to allocate memory using malloc
 * @b: integer to be saved
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
