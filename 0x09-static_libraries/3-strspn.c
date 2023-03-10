#include <string.h>
#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: character to be scanned
 * @accept: character to be matched
 * Return: length of prefix
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
