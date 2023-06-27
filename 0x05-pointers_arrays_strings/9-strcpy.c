#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destinations Value
 * @src: Source Value
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++]; src = '\0';
	return (dest);
}
