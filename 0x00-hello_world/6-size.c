#include <stdio.h>
/**
 * main- the entry point
 * Return: 0 always
*/
int main(void)
{
	printf("Size of char: %d bytes.\n", sizeof(char));
	printf("Size of Integer(int): %d bytes.\n", sizeof(int));
	printf("Size of float: %d bytes.\n", sizeof(float));
	printf("Size of double: %d bytes.\n", sizeof(double));
	printf("Size of long double: %d  bytes.\n", sizeof(long double));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	return (0);
}
