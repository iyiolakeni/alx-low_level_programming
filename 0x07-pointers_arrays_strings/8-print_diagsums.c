#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- print sum od two diagonals of a square integer
 * @a: array
 * @size: size of the array
 * Return: 0
*/
void print_diagsums(int *a, int size)
{
	int sum0, sum1;
	int row, col;

	sum0 = 0;
	sum1 = 0;
	row = 0;
	col = 0;

	while (row < size)
	{
		sum0 += *(a + row  * size + col);
		sum1 += *(a + row  * size + (size - 1 - col));
		col++;
		row++;
	}
	printf("%d, %d\n", sum0, sum1);
}
