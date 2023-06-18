#include <stdio.h>
/**
 *main - Entry point
 *Description: Write the alphbets in reverse
 *Return: 0
 */

int main(void)
{
	int g = 'z';

	while	(g >= 'a')
	{
		putchar(g);
		g--;
	}
	putchar('\n');
	return (0);
}
