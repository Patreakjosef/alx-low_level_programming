#include "main.h"
/**
* print_array - prints a string, followed by a new
* @a: string to print
* @n: is the number of elements
* Return: a and n inputs
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		print("%d", a[n - 1]);
	}
	printf("\n");
}
