#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: A pointer to the firs string to be compared
 * @s2: Apointer to the second string to be compared.
 * Return: If str1 < str2, the negative of the firs unmatched characters
 * if str1 == str2, 0.
 * if str2 > str2, the positive diff of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
