#include <stdio.h>
#include <stdlib.h>
/**
*main - prints alpha in lower case
*Return: Always 0
*/
int main(void)
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	};
	for (alpha = 'A' ; alpha <= 'Z' ; alpha++)
	{
		putchar(alpha);
	};
	putchar('\n');
	return (0);
}
