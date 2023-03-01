#include "main.h"

/**
 * reverse_array - reverse content of integer
 * @a: array name
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int array;

	while (i < n - 1) /* Ensures the array Omits null" */
	{
		array = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = array;
		i++;
		n--;
	}
}
