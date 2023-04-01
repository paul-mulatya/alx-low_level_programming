#include "main.h"

void puts2(char *str)
{
	char *y = str;

	int i;
	int length = 0;
	while (*y != '\0')
	{
		length++;
	 	y++;
	}
	for (i = 0;( i <= (length -1)); i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", *(str + i));
		}
	}
	printf("\n");
}

