#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr- function to concatenate all argument
 * @ac: integer
 * @av: argument vector
 * Return: 0 always
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, avarray = 0; /* size of array av */
	char *mem; /* memory space */

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++) /* Loop to get array size */
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			avarray += 1;
		}
		avarray += 1;
	}
	mem = malloc(sizeof(av) * avarray);

	for (i = 0; i < ac; i++) /* Loop to Add all arguments */
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			mem[k] = av[i][j];
			k++;
		}
		mem[k] = '\n';
		k++;
	}
	mem[k] = '\0';

	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		return (mem);
	}
}
