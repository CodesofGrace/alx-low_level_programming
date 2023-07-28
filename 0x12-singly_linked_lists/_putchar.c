#include <unistd.h>

/**
 * _putchar - Write char c to stdout
 * @c: This is the character to print
 * Return: 1 when successful
 * On error, return -1 and set errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
