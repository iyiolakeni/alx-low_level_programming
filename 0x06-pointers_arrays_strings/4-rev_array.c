#include "main.h"

/**
 * reverse_array - reverse content of integer
 * @a: array name
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i = -1;/* Ensures the array does not overlap" */
	int array;

	while (i < n)
	{
		array = a[i];
		a[i] = a[n];
		a[n] = array;
		i++;
		n--;
	}
}
