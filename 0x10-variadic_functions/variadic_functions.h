#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
/**
 * struct ag - struct
 * @letter: letter signifying data type
 * @func: function ptr
 */
typedef struct ag
{
	char letter;
	void (*func)(va_list);
} arg;
#endif
