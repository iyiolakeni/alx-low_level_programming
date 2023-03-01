#include "main.h"
/**
 * seperator- aray of special character
 * @a: array
 * Return: 0 or 1
 */
int seperator(char a)
{
	int i;
	char array[13] = {'\n', '\t', ' ', '.', ',', ';', ',',
	'!', '?', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (array[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalize all letters in string
 * @ch: string to manipulate
 * Return: string with all letters capitalized
 */
char *cap_string(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (seperator(ch[i]))
			continue;
		if (ch[i] >= 98 && ch[i] <= 122 && (seperator(ch[i - 1])))
			ch[i] = ch[i] - 32;
	}
	return (ch);
}
