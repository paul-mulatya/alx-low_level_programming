#include "main.h"
#include <stdio.h>

/**
 * _strspn-length of a prefix substring
 * @s: pointer to character
 * @accept: pointer to character
 * Return: j
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int j = 0;

	for (; *(s + i) != '\0'; i++)
	{
		int k = 0;

		for (; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				j++;
		}
	}
	return (j);
}
