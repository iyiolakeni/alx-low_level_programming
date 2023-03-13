#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr- function to concatenate all argument
 * @ac: integer
 * @av: argument vector
 *
 * Return: 0 always
*/
char *argstostr(int ac, char **av)
{
	int avarray;
	char *mem;
	int i;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			avarray++; /* a loop to get the size of av array */
	}
	avarray += (ac + 1);
	mem = malloc(sizeof(char) * avarray);
	if (mem == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
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

	return (mem);
}
