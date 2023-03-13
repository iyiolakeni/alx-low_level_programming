#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function to return pointer to allocated mem space
 * @str: character
 *
 * Return: 0 always
*/
char *_strdup(char *str)
{
	int i;
	int len = 0; /* integer for pointer str counter */
	char *mem;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[len] != '\0')
			len++;
	}

	mem = malloc(sizeof(char) * len + 1);

	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
			mem[i] = str[i];
	}
	return (mem);
}
