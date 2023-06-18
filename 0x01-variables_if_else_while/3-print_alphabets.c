#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char n = 'a';
	char m  = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
