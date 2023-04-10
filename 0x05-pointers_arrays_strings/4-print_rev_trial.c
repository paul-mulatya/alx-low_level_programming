#include "main.h"

//BOTH CODES WORK!!

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	int length = 0;

	char *p = str;
	while (*p != '\0')
	{
		length ++;
		p++;
	}
	printf("%d", length); 
	int i ;

	for (i = length; i >= 0; i--)
		printf("%c", *(str + i));
		p--;
	printf("\n");
	printf("%s", str);
	return (0);
}


/*
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	int length = 0;

//	char *p = str;
	int x = 0;
	while (*(str + x) != '\0')
	{
		length ++;
		x++;
	}
	printf("%d", length); 
	int i ;

	for (i = length; i >= 0; i--)
		printf("%c", *(str + i));
	printf("\n");
	return (0);
}*/
