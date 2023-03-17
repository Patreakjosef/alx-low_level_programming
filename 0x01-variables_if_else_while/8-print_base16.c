#include <stdio.h>
#include <stdlib.h>
/**
*main - prints alpha in lower case
*Return: Always 0
*/
int main(void)
{
	int word;
	int alpha;

	for (alpha = 0; alpha < 10; alpha++)
	{
		putchar((alpha%10)+ '0');
	};
	for (word = 0; word < 10; word++)
	{
		putchar(word);
	};
	putchar('\n');
	return (0);
}
