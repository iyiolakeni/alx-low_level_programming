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
	unsigned int i, lens1, lens2;
	char *mem;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	lens1 = 0;
	lens2 = 0;
	while (s2[lens2] != '\0')
		len2++;
	while (s1[lens1] != '\0')
		lens1++;

	if (n >= lens2)
		n = lens2;

	mem = malloc(sizeof(char) * n + lens1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		mem[i + lens1] = s2[i];

	mem[i + lens1] = '\0';

	return (mem);
}
