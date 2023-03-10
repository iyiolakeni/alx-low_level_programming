#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
*/
int main(int argc, char **argv)
{
	int i;
	int mult = 1;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
