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
		char m = '_';
		int j = 0;

		for (; j <= n; 	j++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
