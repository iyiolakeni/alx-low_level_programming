#ifndef _3_CALC_H_
#define _3_CALC_H_
/**
 * op_add - function to add two numbers
 * @a: integer
 * @b: integer
 * Return: addition of a and b
*/
int op_add(int a, int b);
/**
 * op_sub - function to subtract two numbers
 * @a: integer
 * @b: integer
 * Return: subtraction of a and b
*/
int op_sub(int a, int b);
/**
 * op_mul - function to multiply two numbers
 * @a: integer
 * @b: integer
 * Return: multiplication of a and b
*/
int op_mul(int a, int b);
/**
 * op_div - function to division two numbers
 * @a: integer
 * @b: integer
 * Return: division of a and b
*/
int op_div(int a, int b);
/**
 * op_mod - function to modulus two numbers
 * @a: integer
 * @b: integer
 * Return: modulus of a and b
*/
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
