#ifndef MAIN_H_
#define MAIN_H_
/**
 * create_array - fucntion to create array of chars
 * @size: array size
 * @c: specific character
 *
 * Return: 0 always
*/
char *create_array(unsigned int size, char c);
 /**
 * _strdup - function to return pointer to allocated mem space
 * @str: character
 *
 * Return: 0 always
*/
char *_strdup(char *str);

/**
 * str_concat - function to concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Stings concatenated
*/
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - function to return pointer to two dimensional array
 * @width: row
 * @height: column
 *
 * Return: 0 always
*/
int **alloc_grid(int width, int height);

/**
 * free_grid- function that frees a 2 dimensional array
 * @grid: two dimensional array
 * @height: height
 *
 * Return: 0 always
*/
void free_grid(int **grid, int height);
#endif
