#include "main.h"
#include <string.h>
/**
 * _strncat- concatenates two strings
 * @dest: destination
 * @src: source
 * @n: interger
 * Return: 0 always
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = strlen(dest); /* determine the length of destination */

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i]; /* increase the dest as i increases */
	}
	dest[j + i] = '\0';

	return (dest);
}
