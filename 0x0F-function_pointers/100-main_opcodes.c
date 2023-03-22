#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 on success, 1 or 2 on fail
*/
int main(int argc, char **argv)
{
	int bytes;
	int i = 0;
	unsigned char *ptr_func;

	if (argc != 2) /*check if arument is not 2*/
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);/*converts argument 1 into int*/
	if (bytes < 0)/*if bytes is negative*/
	{
		printf("Error\n");
		exit(2);
	}
	ptr_func = (unsigned char *)main;/*function main pointer*/
	if (bytes > 0)/*opcodes are machine instrutcion*/
	{
		while (i < (bytes - 1))/*loop to determine opcode*/
			printf("%02hhx ", ptr_func[i++]);/*print opcode in hexadecimal*/
		printf("%hhx\n", ptr_func[i]);
	}
	return (0);
}
