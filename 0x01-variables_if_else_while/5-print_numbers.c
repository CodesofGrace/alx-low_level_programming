#include <stdio.h>
/**
 *main - Entry point
 *Description: all single digit numbers of base 10 starting from 0,
 *followed by a new line.
 *Return: 0
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a++);
	}
	printf("\n");
	return (0);
}
