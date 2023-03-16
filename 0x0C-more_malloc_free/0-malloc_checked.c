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
	void *mem = malloc(sizeof(mem) * b);

	if (mem != NULL)
	{
		return (mem);
	}
	else
	{
		return (98);
	}
}
