#include "main.h"

/**
 * _islower(int c)-print lowercase
 * @c: parameter to be printed
 * Return: 1 if it is lowercase
 * and zero otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c  <= 122)
		return (1);
	else
		return (0);
}
