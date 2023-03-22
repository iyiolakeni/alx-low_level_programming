#ifndef FUNCTION_POINTERS_H_INCLUDED
#define FUNCTION_POINTERS_H_INCLUDED
/**
 * print_name - function that prints a name
 * @name:name
 * @f: function pointer points to
*/
void print_name(char *name, void (*f)(char *));
/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: action function pointer points to
*/
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * int_index - function to return index of the first element
 * @array: array to go through
 * @size:  number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int value
*/
int int_index(int *array, int size, int (*cmp)(int));
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
#endif
