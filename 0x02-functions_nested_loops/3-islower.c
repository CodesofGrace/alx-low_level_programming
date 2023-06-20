#include "main.h"

/**
 *_islower - Test for lowercase character.
 *@c: Th character whose case is to be found
 *
 *Return: 1 if c is lowercase, otherwise 0.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
