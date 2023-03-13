#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - fucntion to create array of chars
 * @size: array size
 * @c: specific character
 *
 * Return: 0 always
*/
char *create_array(unsigned int size, char c)
{
	char *mem; /* malloc memory */
	unsigned int i = 0; /* counter */

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		mem = malloc(sizeof(c) * size);
	}
	while (i < size)
	{
		if (mem == NULL)
		{
			return (NULL);
		}
		else
		{
			mem[i] = c;
		}
		i++;
	}
	return (mem);
}
