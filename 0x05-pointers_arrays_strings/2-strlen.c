#include <stdio.h>
/**
 * _strlen -Returns the length of a string
 * @str: the string to get length of
 * Return: the string length.
 */

size_t  _strlen(char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
