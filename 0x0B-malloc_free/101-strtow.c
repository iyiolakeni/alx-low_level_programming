#include "main.h"
#include <stdlib.h>
/**
 * wordNum - count num of words recursively
 * @str: pointer to char
 * @i: current index
 * Return: number of words
 **/
int wordNum(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordNum(str, i + 1));
	return (wordNum(str, i + 1));
}
/**
 * wordCount - counts number of words in 1d array of strings
 * @str: pointer to char
 * Return: number of words
 **/
int wordCount(char *str)
{
	if (str[0] != ' ')
		return (1 + wordNum(str, 0));
	return (wordNum(str, 0));
}
/**
 * strtow- function to split two words
 * @str: to be splitted
 * Return: splitted s
*/
char **strtow(char *str)
{
	char **mem;
	int i, n, m, wc;

	if (str == NULL || str[0] == 0)
		return (NULL);
	wc = wordCount(str);
	if (wc < 1)
		return (NULL);
	mem = malloc(sizeof(char *) * (wc + 1));
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < wc && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			mem[i] = malloc(sizeof(char) * (n + 1));
			if (mem[i] == NULL)
			{
				while (--i >= 0)
					free(mem[--i]);
				free(mem);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				mem[i][m] = *str;
				m++, str++;
			}
			mem[i][m] = '\0';
			i++;
		}
		str++;
	}
	mem[i] = '\0';
	return (mem);
}
