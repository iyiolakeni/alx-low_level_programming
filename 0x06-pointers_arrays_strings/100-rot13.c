#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @ch: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *ch)
{
	int i, j;

	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (ch[i] == m[j])
			{
				ch[i] = n[j];
				break;
			}
		}
	}

	return (s);
}
