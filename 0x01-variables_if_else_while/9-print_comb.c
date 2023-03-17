#include <stdio.h>
#include <stdlib.h>
/**
*main - prints alpha in lower case
*Return: Always 0
*/
int main(void)
{
	int alpha;

	for (alpha = 0; alpha < 10; alpha++)
	{
		putchar((alpha % 10) + '0');
		if (alpha != 9)
		{
		putchar(',');
		putchar(' ');
		}
	};
	putchar('\n');
	return (0);
}
