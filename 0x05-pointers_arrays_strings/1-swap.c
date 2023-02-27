/**
* swap_int- update the value it points to
* @a: first number
* @b: second number
* Return: 0 always
*/
void swap_int(int *a, int *b)
{
	int n;
	int m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
