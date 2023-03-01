#include "main.h"
/**
 * string_toupper - capitalize all letters in string
 * @ch: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *ch)
{
	int i; /* Counter */

	for (i = 0; ch[i]; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122) /* Using Asci value to check */
		{
			ch[i] -= 32;
		}
	}
	return (ch);
}

