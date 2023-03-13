#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, lens1 = 0, lens2 = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		lens1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		lens2++;
	}

	mem = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
	{
		mem[i] = s1[i];
	}
	for (i = 0; i < lens2; i++)
	{
		mem[i + lens1] = s2[i];
	}
	mem[i + lens1] = '\0';
	return (mem);
}
