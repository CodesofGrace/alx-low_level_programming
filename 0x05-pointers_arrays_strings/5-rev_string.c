#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)

{
	int index1;
	int index2;
	int length;
	char temp;

	index1 = 0;
	length = 0;

	while (s[index1++])
	{
		length++;
	}
	index1 = length - 1;

	while (index1 >= (length / 2))
	{
		index2 = length - index1 - 1;
		temp = s[index1];
		s[index1] = s[index2];
		s[index2] = temp;
		index1--;
	}
}
