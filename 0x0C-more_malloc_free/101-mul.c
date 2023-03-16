#include <stdlib.h>
#include <stdio.h>
/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer to current item in argument
  * @agc: number of argument
  * Return: return 0 if all digits, 1 if not all digits.
  */
int _isdigit(char **argv, int agc)
{
	int i, j;

	for (i = 1; i < agc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (1);
		}
	}
	return (0);
}
/**
 * main - multiply
 * @argc: argument count
 * @argv: argument array
 * Return: result
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (_isdigit(argv, argc))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
