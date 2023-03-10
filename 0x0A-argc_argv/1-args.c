#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
*/
int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
