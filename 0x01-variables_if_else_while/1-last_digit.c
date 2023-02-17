#include <stdlib.h>
#include <time.h>
/**
 * main-the entry point
 * Return:0 always
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastln = n % 10;
	if (lastln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastln);
	} else if (lastln == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastln);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastln);
	}
	return (0);
}
