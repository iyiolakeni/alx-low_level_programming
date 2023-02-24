#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _isupper- a prototype to check for uppercase
 * @c: letter to be checked
 *
 * Return: 1 as success, 0 as failure
*/
int _isupper(int c);

/**
 * _isdigit- check if it is digit
 *
 * @c: number to be checked
 *
 * Return: 1 as success, 0 as failure
*/
int _isdigit(int c);

/**
 * mul- to multiply two numbers
 *
 * @a: first number
 * @b: second number
 * Return: 0 always
*/
int mul(int a, int b);

/**
 * print_numbers- print number 1 to 9
 *
 */
void print_numbers(void);

/**
 * print_most_numbers- print 1 to 9 followed by a new line except 2 and 4
 *
 */
void print_most_numbers(void);

/**
 * more_numbers- print 10 times of 0 to 14
 *
 */
void more_numbers(void);

/**
 * print_line- print line
 *
 * @n:number
 * Return: 0 always
 */
void print_line(int n);

/**
 * print_diagonal- print a diagonal line
 *
 * @n: number
 * Return: 0 always
 */
void print_diagonal(int n);

/**
 * print_square- print square
 * @size: number
 * Return: 0 always
 */
void print_square(int size);

/**
 * print_triangle- print triangle
 * @size: number
 * Return: 0
 */
void print_triangle(int size);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
#endif
