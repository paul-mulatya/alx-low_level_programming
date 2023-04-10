#include "main.h"

/**
 * print_line- for
 * @n: parameter
 * Return: 0
 */
void print_line(int n)
{
	if(n <= 0)
		_putchar('\n');
	else
	{	
		int j = 1;

		for (; j <= n; 	j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
