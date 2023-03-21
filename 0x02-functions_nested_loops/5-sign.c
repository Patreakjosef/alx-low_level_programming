#include "main.h"

/**
 * print_sign - checks if acharacter is lowercase or upper case
 * @c: the character
 * Return: 1 if letter is alphabet, 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

