#include "main.h"

/**
 * _isalpha - checks if acharacter is lowercase or upper case
 * @c: the character
 * Return: 1 if letter is alphabet, 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
