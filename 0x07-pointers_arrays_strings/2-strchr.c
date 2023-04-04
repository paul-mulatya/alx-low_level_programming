#include "main.h"
#include <stdio.h>

/**
 * _strchr-return the first instance of char c
 * @s: pointer to character
 * @c: character type
 * Return: pointer to character or 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		s++;
	}
	return (0);
}
