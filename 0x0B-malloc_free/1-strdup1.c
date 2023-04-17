#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int length = 0;
	int i;
	int j;
	char *p;
	
	if (str == NULL	)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	p =(char*)malloc((length + 1)* sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < length; j++)
	{	
		p[j] = str [j];
	}
	return (p);
}
