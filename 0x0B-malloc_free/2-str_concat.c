#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function to concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Stings concatenated
*/
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int i = 0;
	int len = strlen(s1);
	int len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	mem = malloc(sizeof(char) * (len + len2 + 1));

	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < len)
		{
			mem[i] = s1[i];
			i++;
		}
		while (i < len2)
		{
			mem[i + len2] = s2[i];
		}
		mem[i + len] = '\0';
		return (mem);
	}
}
