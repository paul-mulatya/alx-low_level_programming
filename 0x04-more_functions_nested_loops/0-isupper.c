#include "main.h"

/**
 * _isupper- if
 * @c: parameter
 * Return: 1 and 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
