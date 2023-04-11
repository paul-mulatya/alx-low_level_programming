#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(size));
	unsigned int j;
	
	if (size == 0 || str == NULL)
		return(NULL);
	for (j = 0; j < size; j++)
	{
		str[j] = c;
	}
	return (str);
}
