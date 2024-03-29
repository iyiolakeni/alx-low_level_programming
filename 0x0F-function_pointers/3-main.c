#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: arguments
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int num1;
		int num2;
		int (*cal)(int, int);

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		cal = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", cal(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
