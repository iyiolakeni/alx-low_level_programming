#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
    int i;          /* index into the format string */
    int flag;       /* flag for checking whether to print comma */
    char *str;      /* pointer to a string argument */
    va_list a_list; /* variable argument list */

    /* Initialize the variable argument list with the format string */
    va_start(a_list, format);

    i = 0;
    while (format != NULL && format[i] != '\0')
    {
        switch (format[i])
        {
            case 'c':
                /* If the argument is a character, print it */
                printf("%c", va_arg(a_list, int));
                flag = 0;
                break;
            case 'i':
                /* If the argument is an integer, print it */
                printf("%i", va_arg(a_list, int));
                flag = 0;
                break;
            case 'f':
                /* If the argument is a float, print it */
                printf("%f", va_arg(a_list, double));
                flag = 0;
                break;
            case 's':
                /* If the argument is a string, print it */
                str = va_arg(a_list, char*);
                if (str == NULL)
                    /* If the string is NULL, print (nil) */
                    str = "(nil)";
                printf("%s", str);
                flag = 0;
                break;
            default:
                /* If the format character is invalid, set the flag */
                flag = 1;
                break;
        }
        /* Check if there are more arguments to print */
        if (format[i + 1] != '\0' && flag == 0)
            /* If so, print a comma */
            printf(", ");

        /* Move on to the next format character */
        i++;
    }

    /* Print a newline at the end of the output */
    printf("\n");

    /* End the variable argument list */
    va_end(a_list);
}
