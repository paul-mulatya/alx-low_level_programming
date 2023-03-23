#include "main.h"

/**
 * print_line- for
 * @n: parameter
 * Return: 0
 */
void print_line(int n)
{
	char m = '_';
	int j = 0;

	for (; j <= n; 	j++)
		_putchar(m);
	_putchar('\n');
}
