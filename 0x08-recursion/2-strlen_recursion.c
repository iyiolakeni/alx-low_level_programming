#include "main.h"
#include <string.h>

/**
 * _strlen_recursion- function to print string length
 * @s: string to check the number
 * Return: S
*/

int _strlen_recursion(char *s)
{
    int n;

    if (*s)
    {
        n = _strlen_recursion(s + 1);
        return (n += 1);
    }
    return (0);
}

