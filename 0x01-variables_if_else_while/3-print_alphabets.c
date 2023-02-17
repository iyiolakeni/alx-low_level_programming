#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar(toupper(ch));
		putchar('\n');
	}
	return (0);
}
