#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name:name
 * @f: function pointer points to
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
