#include "main.h"
#include <math.h>
#include <limits.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int j = 0, k = 1;
	int l = 0;
	int q = 2;

	if (!b)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		j++;
	}
	for (i = j; i > 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		k += (pow(q,l) * (b[i] - '0'));
		l++;
	}
	return (k);
}
