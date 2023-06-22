#include "main.h"

/**
 * _isdigit - Check if a letter is a digit
 * @a: The number to be checked
 * Return: 1 if a letter is a digit else return 0
 */

int _isdigit(int a)

{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
