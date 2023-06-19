#include <stdio.h>
/**
 *main - Entry point
 *Description: Write a program that prints all the numbers
 *of base 16 in lowercase, followed by a new line.
 *Return: 0
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}

	putchar('\n');
	return (0);
}
