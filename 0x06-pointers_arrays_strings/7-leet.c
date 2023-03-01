#include "main.h"
/**
 * leet - leet
 * @ch: string
 *
 * Return: char value
 */
char *leet(char *ch)
{
	char array[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; array[j] != '\0'; j++)
		{
			if (ch[i] == array[j])
			{
				ch[i] = array[j + 1];
				break;
			}
		}
	}
	return (ch);
}
