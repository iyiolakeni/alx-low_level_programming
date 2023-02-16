#include <stdio.h>
/**
 * main- the entry point
 * Return: 0 always
*/
int main(void)
{
	printf("Size of char: %d bytes.\n", sizeof(char));
	printf("Size of Integer(int): %d bytes.\n", sizeof(int));
	printf("Size of Long Int: %d bytes.\n", sizeof(long int));
	printf("Size of Long Long Int: %d bytes.\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
