#include <stdlib.h>
/**
 * int_index - function to return index of the first element
 * @array: array to go through
 * @size:  number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int value
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /*Counter for array*/

	if (size <= 0 || array == NULL || cmp == NULL) /*Check if size is not*/
		return (-1); /*positive and if cmp and array is NULL */
	for (i = 0; i < size; i++)/*Loop to check for pointer in array*/
	{
		if (cmp(array[i]))/*function to check for index*/
			return (i);
	}
	return (-1);
}
