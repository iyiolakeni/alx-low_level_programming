#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function to print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print; /* Initialize variadic list as print */
	unsigned int i = 0;
	char *arg; /*Pointer to store arguments*/

	va_start(print, n);
	while (i < n)
	{
		arg = va_arg(print, char *); /*Initialize and store arguments*/
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (arg == NULL) /*check if arguments contains Null*/
			printf("(nil)");
		printf("%s", arg);/*Retrieve arguments*/
		i++;
	}
	va_end(print);/*Free the List*/
	printf("\n");
}
