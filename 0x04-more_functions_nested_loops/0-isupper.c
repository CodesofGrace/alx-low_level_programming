#include "main.h"
/**
 *_isupper - check if a letteris upper
 *@c: The number to be checked
 *Return: 1 for upper leter or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
