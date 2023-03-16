#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat- function to concatenate two string
 * @s1: string
 * @s2: string 2
 * @n: bytes
 * Return: 0 always
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, lens1 = 0, lens2 = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;

	if (n >= lens2)
		n = lens2;

	mem = malloc(sizeof(char) * (lens1 + n + 1));
	if (mem != NULL)
	{
		for (i = 0; i < lens1; i++)
		{
			mem[i] = s1[i];
		}
		for (i = 0; i < n; i++)
		{
			mem[i + lens1] = s2[i];
		}
		mem[i + lens1] = '\0';
		return (mem);
	}
	else
	{
		return (NULL);
	}
}
