#include <stdio.h>
#include <stdlib.h>
/**
*main - prints alpha in lower case
*Return: Always 0
*/
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		putchar('\n');
	};
	return (0);
}
