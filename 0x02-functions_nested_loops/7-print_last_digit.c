#include "main.h"

/**
 * print_last_digit- if
 * @a: parameter
 * Return: k
 *
 */
int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
