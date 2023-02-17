#include <stdio.h>
/**
 * main- prints all numbers of base 16 in lowercase
 * Return: 0 always
*/
int main(void)
{
	int i;
	int let = 'a';

	for (i = '0'; i < '10'; i++)
		putchar(i);
	for (; let <= 'f'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
