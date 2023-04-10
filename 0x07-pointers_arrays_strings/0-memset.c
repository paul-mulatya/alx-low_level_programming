#include "main.h"
#include <stdio.h>
/**
 * _memset-fills memory of *s with char b
 * @s: pointer to character
 * @b: character parameter
 * @n: unsigned integer parameter
 * Return: pointer to character
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int *p = (int *) &n;

	for (i = 0; i <= *p; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		s[i] = b;
	}
	return (s);
}
