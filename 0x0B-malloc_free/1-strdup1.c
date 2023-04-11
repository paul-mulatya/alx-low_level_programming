#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int length = 0;
	int i;
	int j;
	char *p;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	p =(char*)malloc((length + 1)* sizeof(char));
	
	for (j = 0; j < length; j++)
	{	
		p[j] = str [j];
	}
	return (p);
}
