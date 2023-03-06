#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- print diagonal sum of arrays
 * @a: array
 * @size: pointer
 * Return: Pointer to the beginning or NULL
*/
void print_diagsums(int *a, int size)
{
	int i;
	int diagonalone = 0;
	int diagonaltwo = 0;

	for (i = 0; i < size; i++)
	{
		diagonalone += a[(i * size) + 1];
		diagonaltwo += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagonalone, diagonaltwo);
}
