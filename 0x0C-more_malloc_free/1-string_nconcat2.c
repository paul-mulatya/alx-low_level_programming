#include <stdlib.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	int length = 0;
	unsigned int length2 = 0;
	char *ptr;
	
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		length++;
	}
	length++;
	
	for (k = 0; *(s1 + k) != '\0'; k++)
	{
		length2++;
	}
	if (n < length2)
	{
		for (j = 0; j < n; j++)
		{
			s1[length] = s2[j];
			length++;
		}
	}
	else 
	{	
		for (j = 0; *(s2 + j); j++)
		{
			s1[length] = s2[j];
			length++;
		}
	}
	length++;
	ptr = (char*)malloc(sizeof *s1 * (length));
	if (ptr == NULL)
	{
		return (NULL); 
	}
	ptr = s1;
	return (ptr);
}
