#include "main.h"

/**
 * _abs-if
 * @a:parameter
 * Return: a
 *
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
