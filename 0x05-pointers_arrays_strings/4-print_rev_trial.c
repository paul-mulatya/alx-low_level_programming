#include "main.h"

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	int length = 0;
	while (*str != '\0')
	{
		length ++;
		str++;
	}
	str--;
	printf("%d", length); 
	int i ;

	for (i = 0; i < length; i++)
		printf("%c", *str);
		str--;
	printf("\n");
	return (0);
}
