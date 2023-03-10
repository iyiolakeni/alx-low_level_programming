#include <string.h>
#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: character to be scanned
 * @accept: character to be matched
 * Return: Pointer to @accept or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
