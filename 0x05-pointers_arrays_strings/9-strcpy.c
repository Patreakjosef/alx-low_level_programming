#include "main.h"
/**
* char *_strcpy - prints a string, followed by a new
* @dest: string to print
* @src: is the number of elements
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
