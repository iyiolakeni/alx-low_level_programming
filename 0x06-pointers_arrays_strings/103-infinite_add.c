#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result lenght
 * Return: sum
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* local variable declaration */
	int i = 0, j = 0, con, unt = 0, m, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		unt = i;
	else
		unt = j;
	if (unt + 1 > size_r)
		return (0);
	r[unt] = '\0';
	for (con = unt - 1 ; con >= 0 ; con--)
	{
		i--;
		j--;
		if (i >= 0)
			m = n1[i] - '0';
		else
			m = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[con] = (m + s + d) % 10 + '0';
		d = (m + s + d) / 10;
	}
	if (d == 1)
	{
		r[unt + 1] = '\0';
		if (unt + 2 > size_r)
			return (0);
		while (unt-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
