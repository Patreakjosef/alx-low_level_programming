#include "main.h"

/**
 * main - prints _putchar and a new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	int g;

	for (g = 'a'; g <= 'z'; g++)
	{
		_putchar(g);
		_putchar('\n');
		return (0);
	}
}
