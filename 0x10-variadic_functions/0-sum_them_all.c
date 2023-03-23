#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function to add all parameters
 * @n: integer
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list Sum; /* Initialize a variadic function List*/

	if (n == 0)
		return (0);
	va_start(Sum, n); /*Initialize the arguments*/
	for (i = 0; i < n; i++)
		sum += va_arg(Sum, int); /*Perform operation argument */
	va_end(Sum); /*Free the List*/
	return (sum);
}
