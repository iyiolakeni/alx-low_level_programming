#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - returns pointer to functions
 * @s: operator to be passed as argument
 * Return: pointer always
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0') /*check if argument s is operator*/
			return (ops[i].f);/*return which operator it is */
		i++;
	}
	printf("Error\n");
	exit(99);
}
