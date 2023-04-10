#include "main.h"
#include <stdio.h>
void _puts_recursion(char *s)
{
/*	int length = 0;
	int i;*/
/*	for (i = 0; *(s + i) != '\0'; i++)
		length++;*/
	if ( *s == '\0')
		_putchar('\0');

	printf("%c", *s);
	_puts_recursion(s + 1);
}
