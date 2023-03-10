#ifndef MAIN_H_
#define MAIN_H_
/**
 * _putchar- function to print
 * @c: char to be checked
 * Return: 0 always
*/
int _putchar(char c);

/**
 * _islower- function to check if c is lowercase
 * @c: string to be checked
 * Return: 0 always
*/
int _islower(int c);

/**
 * _isalpha- fucntion to check if c is an alphabeter
 * @c: string to be checked
 * Return: 0 always
*/
int _isalpha(int c);

/**
 * _abs- function to check absolute value
 * @n: number to be checked
 * Return: 0 always
*/
int _abs(int n);

/**
 * _isupper- function to check if c is uppercase
 * @c: characker to be checked
 * Return: 0 always
*/
int _isupper(int c);

/**
 * _isdigit- function to check if c is a number
 * @c: number to be checked
 * Return: 0 always
*/
int _isdigit(int c);

/**
 * _strlen- function to print lenght of character
 * @s: character to be checked
 * Return: 0 always
*/
int _strlen(char *s);

/**
 * _puts- function to print s with a new line
 * @s: character to be printed
*/
void _puts(char *s);

/**
 * _strcpy- function to copy src into dest
 * @dest: destination
 * @src: source
 * Return: 0 always
*/
char *_strcpy(char *dest, char *src);

/**
 * _atoi- function atoi
 * @s: char to be checked
 * Return: 0 always
*/
int _atoi(char *s);

/**
 * _strcat- fucntion to join src to dest
 * @dest: destination
 * @src: source
 * Return: 0 always
*/
char *_strcat(char *dest, char *src);

/**
 * _strncat- fucntion to cat dest and src with buffer n
 * @dest: destination
 * @src: source
 * @n: buffer
 * Return: 0 always
*/
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy- function to copy over buffer n
 * @dest: destination
 * @src: source
 * @n: buffer
 * Return: 0 always
*/
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp- fucntion to compare s1 and s2
 * @s1: character 1
 * @s2: character 2
 * Return: 0 always
*/
int _strcmp(char *s1, char *s2);

/**
 * _memset- function memset
 * @s: char 1
 * @b: char 2
 * @n: integer
 * Return: 0 always
*/
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy- function to copy over buffer n
 * @dest: destination
 * @src: source
 * @n: buffer
 * Return: 0 always
*/
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr- function strchr
 * @s: character 1
 * @c: character 2
 * Return: 0 always
*/
char *_strchr(char *s, char c);

/**
 * _strspn- function strspn
 * @s: character
 * @accept: accept
 * Return: 0 always
*/
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk- function srpbrk
 * @s: character
 * @accept: accept
 * Return: 0 always
*/
char *_strpbrk(char *s, char *accept);

/**
 * _strstr- function strstr
 * @haystack: stack
 * @needle: needle
 * Return: 0 always
*/
char *_strstr(char *haystack, char *needle);
#endif
