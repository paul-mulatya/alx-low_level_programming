#include "main.h"

/**
 * more_numbers-for
 * Return: 0
 */
void more_numbers(void)
{
	int i = 1;

	while  (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j > 9 && j <= 14)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
