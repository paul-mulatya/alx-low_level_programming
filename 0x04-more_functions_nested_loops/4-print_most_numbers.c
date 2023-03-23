#include "main.h"

/**
 * print_most_numbers-for
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 67; i++)
		if (i != 2 && i != 4)
			_putchar(i);
	_putchar('\n');
}
