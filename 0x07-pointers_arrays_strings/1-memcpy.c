#include "main.h"
#include <stdio.h>

/**
 * _memcpy-copies n bytes of src to memory of dest
 * @dest: character string
 * @src: character string
 * @n: unsigned integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int *p = (int *) &n;

	for (i = 0; i < *p && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
