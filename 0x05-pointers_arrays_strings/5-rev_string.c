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
	int i;
	char ch;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		ch = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = ch;
	}
}
