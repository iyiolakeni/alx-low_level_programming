#include <stdio.h>
/**
 * main- prints all numbers of base 16 in lowercase
 * Return: 0 always
*/
int main(void)
{
	int i = 0;

	for (; i <= 15; i++)
		putchar('%x' + i);
	putchar('\n');
	return (0);
}
