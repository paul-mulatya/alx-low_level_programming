#include "main.h"

void puts_half(char *str)
{
	int length = 0;
	int i = 0;
	int x;

	while (*(str + i))
	{
		length++;
		i++;
	}
	printf("%d\n", length);

	if ((length % 2) == 0)
	{
		for (x = (length / 2); x < length; x++)
			printf("%c", *(str + x));
	}
	else 
		for (x = ((length - 1) / 2); x < length; x++)
			printf("%c", *(str + x));
	printf("\n");
}
