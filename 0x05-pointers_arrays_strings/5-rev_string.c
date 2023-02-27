#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* print_rev- reverse string
* @s: letter to be checked
*
* Return: 0 always
*/
void rev_string(char *s)
{
	int i, n = strlen(s);
	char ch;

	for (i = 0; i < n / 2; i++)
	{
		ch = s[i];
		s[i] = s[n(s) - i - 1];
		s[n(s) - i - 1] = ch;
	}
}
