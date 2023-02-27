#include <stdio.h>
#include "2-strlen.c"
#include "main.h"
/**
* rev_string- reverse string function
* @s: letter to be checked
*
*/
void rev_string(char *s)
{
	int i, n = _strlen(s);
	char ch;

	for (i = 0; i < n / 2; i++)
	{
		ch = s[i];
		s[i] = s[n(s) - i - 1];
		s[n(s) - i - 1] = ch;
	}
}
