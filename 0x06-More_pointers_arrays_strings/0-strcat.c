#include "main.h"

/**
 * _strcat - Concanates two strings using at most
 *
 * an inputted number of bytes from src.
 *
 * @dest: the string to be appended upon.
 *
 * @src: the string to be appended to dest.
 *
 * @n: the number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len = index;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
