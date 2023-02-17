#include <stdio.h>
/**
 * main- print alphabet in reversed using putchar
 * Return: 0 always
*/
int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
