#include <stdio.h>
/**
 *main - Entry point
 *Description: Write a program that prints all possible
 *combinations of single-digit numbers.
 *Returns: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
		if (a > 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
