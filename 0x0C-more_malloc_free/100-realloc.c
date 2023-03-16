#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_realloc- function to reallocate a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of the new memory block;
 * Return: 0 always
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr; /*New pointer for New mem */

	if (new_size == old_size)/*Return ptr if old_size is to be reallocated*/
		return (ptr);

	if (ptr == NULL) /* if ptr is null, assign new size and memory*/
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);

		return (newptr);
	}
	else
	{
		if (new_size == 0)/*free ptr if new_size to be reallocated=0*/
		{
			free(ptr);
			return (NULL);
		}
	}
	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
	{
		newptr[i] = ((char *) ptr)[i];
	}

	free(ptr); /* free the old memory ptr */
	return (newptr);
}
