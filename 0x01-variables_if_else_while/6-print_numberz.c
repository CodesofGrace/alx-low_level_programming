#include <stdio.h>

/**
 *main - Entry point
 *Desription: print single numbers 1 to 9
 *Return: 0
 */

int main(void)
{
	int p = 0;

	while (p <= 9)
	{
		putchar(p + '0');
		p++;
	}
	putchar('\n');
	return (0);
}
