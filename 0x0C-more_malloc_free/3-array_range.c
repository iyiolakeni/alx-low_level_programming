#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range- fucntion to create an array of integers
 * @min: min integer
 * @max: max Integer
 * Return: NULL or 0
 */
int *array_range(int min, int max)
{
	int i = 0;
	int min_max = 0;/*A value to hold the length of number */
	int *mem;

	if (min > max)
		return (NULL);

	while (min <= max)
	{
		min++;
		min_max++;
	}
	mem = malloc(sizeof(int) * min_max);

	if (mem != NULL)
	{
		while (min < max)
		{
			mem[i] = min;
			i++;
			min++;
		}
		return (mem);
	}
	else
	{
		return (NULL);
	}
}
