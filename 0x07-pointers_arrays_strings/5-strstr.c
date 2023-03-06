#include <string.h>
#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: character to be examined
 * @needle: sub-string to be searched in @haystack
 * Return: Pointer to the beginning or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
