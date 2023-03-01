#include "main.h"
#include <string.h>
/**
 * _strcmp - to copy one character to another
 * @s1: destination
 * @s2: source
 * Return: 0 always
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
