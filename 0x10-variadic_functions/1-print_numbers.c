#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function to print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print; /* Initialize variadic list as print */
	unsigned int i = 0; /* counter*/

	va_start(print, n); /*Initialize arguments*/
	while (i < n)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(print, int));/*Retrieve arguments*/
		i++;
	}
	va_end(print); /*Free the List*/
	printf("\n");
}
