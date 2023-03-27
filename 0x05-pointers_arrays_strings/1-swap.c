#include "main.h"
/**
 * swap_int - swaping values
 * @a: first int
 * @b: second int
 * Return - return swap_int
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
