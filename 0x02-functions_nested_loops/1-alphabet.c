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
		putchar(g);
		putchar('\n');
	}
}
