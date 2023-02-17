#include <stdio.h>
/**
 * main-the entry point
 * Return:0 always
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			goto printalp;
		}
printalp:
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
