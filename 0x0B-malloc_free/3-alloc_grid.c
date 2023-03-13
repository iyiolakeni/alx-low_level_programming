#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function to return pointer to two dimensional array
 * @width: row
 * @height: column
 *
 * Return: 0 always
*/
int **alloc_grid(int width, int height)
{
	int i, j; /* array counters */
	int **mem;

	if (width <= 0 || height <= 0)
		return (NULL);

	(int **)malloc(sizeof(int *) * height); /* casting malloc to int type */

	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			mem[i] = (int *)malloc(sizeof(int) * width);
			if (mem[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(mem[j]);
				}
				free(mem);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				mem[i][j] = 0;
			}
		}
	}
	return (mem);
}
