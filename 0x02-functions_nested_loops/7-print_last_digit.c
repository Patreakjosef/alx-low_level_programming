#include "main.h"

/**
 * print_last_digit - Computes the absolute value of an integer
 * @n: The integer to be computed
 * Return: The absolute value
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + ld);

		return (0);
}
