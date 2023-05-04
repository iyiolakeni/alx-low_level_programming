#include "main.h"
/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int number = 1;
	char *endianess = (char *)&number;

	if (*endianess == 1)
		return (1);

	return (0);
}
