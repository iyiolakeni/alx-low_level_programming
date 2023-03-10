#include "main.h"
#include "string.h"

/**
 * _strncpy - to copy one character to another
 * @dest: destination
 * @src: source
 * @n: interger
 * Return: 0 always
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* While i increase, read through each letter */
	/*in src as long as src doesn't contain '0'*/
	for (i = 0; i < n && src[i] != '0'; i++)
	{
		dest[i] = src[i]; /* Copies src into destination file*/
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
