#include "main.h"

/**
 *_isalpha - Checks for aplpahbetic letters.
 *@c: the letter to be checked
 *Return: 1 if alphabetcic letter is present and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
