#include "main.h"
/**
 * _strlen - sstring
 * @len: lengt of sri
 * @s: string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
