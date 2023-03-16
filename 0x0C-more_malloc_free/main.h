#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * malloc_checked- fucntion to allocate memory using malloc
 * @b: integer to be saved
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b);

/**
 * string_nconcat- function to concatenate two string
 * @s1: string
 * @s2: string 2
 * @n: bytes
 * Return: 0 always
*/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc- function to allocate memory for an array
 * @nmemb: integer elmements
 * @size: bytes of array
 * Return: NULL or memory allocation
*/
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range- fucntion to create an array of integers
 * @min: min integer
 * @max: max Integer
 * Return: NULL or 0
 */
int *array_range(int min, int max);

/**
 *_realloc - function to reallocate a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of the new memory block;
 * Return: 0 always
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
